/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 14:00:02 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/30 14:49:41 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes a string to a file
**
** @param	the string to be written
** @param	the file descriptor the string will be written to
*/

void	ft_putendl_fd(char const *s, int fd)
{
	unsigned int	i;
	char			c;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
	c = '\n';
	write(fd, &c, 1);
}
