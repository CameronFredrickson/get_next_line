/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:07:22 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 17:07:23 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if the int is a valid ascii value
**
** @param 	an int
**
** @return	1: if the param is an ascii value 0-127
**			0: otherwise
*/

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
