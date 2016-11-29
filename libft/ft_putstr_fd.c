/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 13:53:29 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/30 14:44:03 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes a character string to a given file descriptor
**
** @param	the character string to be written to a file
** @param	the file descriptor the character string will be written to
*/

void	ft_putstr_fd(char const *s, int fd)
{
	unsigned int		index;

	if (!s)
		return ;
	index = 0;
	while (s[index])
		write(fd, &s[index++], 1);
}
