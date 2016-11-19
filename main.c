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
	int		status;
	char	*line = 0;

	pipe(pipe_fd);
	write(pipe_fd[1], "abcde\n", 6);
	write(pipe_fd[1], "01234\n", 6);
	write(pipe_fd[1], "56789\n", 6);
	close(pipe_fd[1]);

	while ((status = get_next_line(pipe_fd[0], &line)))
	{
		if (status == -1)
		{
			perror("GET_NEXT_LINE");
			exit(EXIT_FAILURE);
		}
		printf("status: %d, line: %s\n", status, line);
	}
	printf("status: %d, line: %s\n", status, line);
	close(pipe_fd[0]);
	return (0);
}
