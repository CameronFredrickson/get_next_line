/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 14:23:06 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/28 14:35:03 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexicographical comparison of two strings
**
** @param	string to compare
** @param	string to compare
**
** @return	1: if the strings are the identical
**			0: if they are not
*/

int		ft_strequ(char const *s1, char const *s2)
{
	int		result;

	if (!s1 || !s2)
		return (0);
	result = ft_strcmp(s1, s2);
	if (!result)
		return (1);
	return (0);
}
