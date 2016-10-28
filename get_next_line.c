/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:03:53 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/27 19:04:27 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* TO DO

** figure out how to free store_buf calls that are not returned

** figure out how to set *temp = buf; properly

** figure out why BUF_SIZE = 10000000 does not work 
*/

int		*parse_line(char **buf)
{
	int		i;

	i = 0;
	while (i < BUF_SIZE)
	{
		if ((*buf)[i] == '\n' || (*buf)[i] == 0)
		{
			(*buf)[i] = 0;
			break ;
		}
		i++;
	}
	return (i);
}

char	*store_buf(char *buf, char *store, int l_status, int alloc_count)
{
	char	*str;

	str = ft_strnew(alloc_count);
	ft_strncpy(str, store, alloc_count - l_status);
	ft_strcat(str, buf);
	return (str)
}

int		read_line(const int fd, char **line, int flag, int alloc_count)
{
	char	**temp;
	int		r_status;
	int		l_status;
	char	buf[BUF_SIZE];

	while (1)
	{
		if ((r_status = read(fd, buf, BUF_SIZE)) < 0)
			return (-1);
		else if (r_status == 0 && flag)
			return (0);
		flag = 0;
		l_status = parse_line(buf);
		if (l_status < BUF_SIZE)
			break ;
		alloc_count += l_status;
		*line = store_buf(buf, *line, l_status, alloc_count);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int		helper_status;

	helper_status = get_next_line_helper(fd, line, 1, 0);
	if (helper_status < 0)
		return (-1);
	else if (helper_status == 0)
		return (0);
	return (1);
}
