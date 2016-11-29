/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:19:05 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/25 16:54:26 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if the int is a printable ascii value ' ' - '~'
**
** @param 	an int
**
** @return	1: if the param is an ascii value 32-126
**			0: otherwise
*/

int		ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
