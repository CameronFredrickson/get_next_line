/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 22:02:26 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/01 22:02:40 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the int is white-space character: '\t', '\n', '\v', '\r', '\f',
** or ' '
**
** @param 	an int
**
** @return	1: if the param is an ascii value 9, 10, 11, 12, 13, or 32
**			0: otherwise
*/

int		ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}
