/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:22:26 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 14:22:27 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the int is alpha-numeric ascii value '0'-'9', 'a'-'z', or 'A'-'Z'
**
** @param 	an int
**
** @return	1: if the param is an ascii value 48-57 or 65-90 or 97-122
**			0: otherwise
*/

int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
