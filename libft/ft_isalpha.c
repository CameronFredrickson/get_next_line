/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:59:38 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 10:59:39 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if the int is alphabetic ascii value 'a'-'z', or 'A'-'Z'
**
** @param 	an int
**
** @return	1: if the param is an ascii value 65-90 or 97-122
**			0: otherwise
*/

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
