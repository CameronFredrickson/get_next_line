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

int		*parse_line(char **buf)
{
	int		i;
	char	*str;

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

int		get_next_line_helper(const int fd, char **line, int flag, int alloc_count)
{
	char	*temp;
	char	*line_alloc;
	int		r_status;
	int		l_status;
	char	buf[BUF_SIZE];

	while (1)
	{
		if ((r_status = read(fd, buf, BUF_SIZE)) < 0)
			return (-1);
		else if (r_status == 0 && flag)
			return (0);
		*line = buf;
		l_status = parse_line(line);
		if (l_status < BUF_SIZE)
			break ;
		str = ft_strnew((alloc_count += l_status));
		ft_strncpy(str, buf, alloc_count);

		flag = 0;
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
