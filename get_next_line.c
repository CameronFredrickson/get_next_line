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

/*
** TO DO

** figure out why BUF_SIZE = 10000000 does not work : 1
** 		1. currently limit stacksize is 8MB 10MB would exceed this limit
**		   forcing the program to terminate
**		2. typing ulimit (user limits command):
**		   ulimits -Ss will return a soft stack limit of 8192 KB
**		   ulimits -Hs will return a hard stack limit of 65532 KB
**		   therefore, the soft stack limit can be changed to 10000KB to
**		   accomadate a BUF_SIZE = 10000000 
**		*. -a : All current limits are reported
**		*. -n : the maximum number of open file descriptors
**		*. -p : the pipe buffer size
**		*. -t : the maximum cpu time in seconds
**		*. -u : the maximum number of processes available to a single user

** figure out how to protect against a null or garbage pointer passed in 
** as char **line : 0

** figure out how to push to both repos with one git push : 0

** read in the whole file and save each line in a linked list : 0
*/

void	store_file(t_list *file_p)
{
	t_list			*file;
	char			*new_content;
	int				status;
	char			buf[BUF_SIZE];

	file = ft_lstnew(0, fd);
	while ((status = read(fd, buf, BUF_SIZE)) && status != -1)
	{
		new_content = ft_strnew(ft_strlen(file->content) + ft_strlen(buf));
		ft_strcpy(new_content, file->content);
		ft_strcat(new_content, buf);
		file->content = new_content;
	}
	file_p = file;
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*fd_p;
}
