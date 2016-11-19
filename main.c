/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:09:21 by cfredric          #+#    #+#             */
/*   Updated: 2016/11/18 15:09:22 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

int		main(void)
{
	int		pipe_fd[2];
	int		fd1, fd2, fd3;
	int		status;
	char	*line = 0;

	if (pipe(pipe_fd) == -1)
	{
			perror("BROKEN PIPE");
			exit(EXIT_FAILURE);
	}
	write(pipe_fd[1], "abcde\n", 6);
	write(pipe_fd[1], "01234\n", 6);
	write(pipe_fd[1], "56789\n", 6);
	fd1 = dup(pipe_fd[0]);
	close(pipe_fd[0]);
	close(pipe_fd[1]);

	if (pipe(pipe_fd) == -1)
	{
			perror("BROKEN PIPE");
			exit(EXIT_FAILURE);
	}
	write(pipe_fd[1], "z y x u v\n", 10);
	write(pipe_fd[1], ",,..,,..\n", 9);
	write(pipe_fd[1], "()()()()", 8);
	fd2 = dup(pipe_fd[0]);
	close(pipe_fd[0]);
	close(pipe_fd[1]);

	if (pipe(pipe_fd) == -1)
	{
			perror("BROKEN PIPE");
			exit(EXIT_FAILURE);
	}
	write(pipe_fd[1], "horse\n", 6);
	write(pipe_fd[1], "uid0912392\n\n\n", 13);
	write(pipe_fd[1], "**&@#&!@@", 9);
	fd3 = dup(pipe_fd[0]);
	close(pipe_fd[0]);
	close(pipe_fd[1]);

	while ((status = get_next_line(fd1, &line)))
	{
		if (status == -1)
		{
			perror("GET_NEXT_LINE");
			exit(EXIT_FAILURE);
		}
		printf("FD1: status = %d, line = %s\n", status, line);
		status = get_next_line(fd2, &line);
		printf("FD2: status = %d, line = %s\n", status, line);
		status = get_next_line(fd3, &line);
		printf("FD3: status = %d, line = %s\n\n", status, line);
	}
	printf("FD1: status = %d, line = %s\n", status, line);
	status = get_next_line(fd2, &line);
	printf("FD2: status = %d, line = %s\n", status, line);
	status = get_next_line(fd3, &line);
	printf("FD3: status = %d, line = %s\n\n", status, line);

	status = get_next_line(fd3, &line);
	printf("FD3: status = %d, line = %s\n", status, line);
	status = get_next_line(fd3, &line);
	printf("FD3: status = %d, line = %s\n", status, line);

	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
