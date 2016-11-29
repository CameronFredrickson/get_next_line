/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:26:55 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 11:26:58 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if the int is a numeric ascii value '0'-'9'
**
** @param 	an int
**
** @return	1: if the param is an ascii value 48-57
**			0: otherwise
*/

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
