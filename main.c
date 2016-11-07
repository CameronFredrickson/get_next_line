/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:02:15 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/27 19:03:37 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		status;
	int		fd;
	char	buf[8];

	argc = 0;
	if (!(fd = open(argv[1], O_RDONLY, S_IREAD)))
	{
		write(1, "boom\n", 5);
		return (0);
	}
	return (0);
}
