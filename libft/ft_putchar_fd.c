/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 13:32:45 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/30 14:15:48 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes a character to file
**
** @param	the character to be written to the file
** @param	the file descriptor the character will be written to
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
