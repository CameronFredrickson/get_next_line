/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 14:30:29 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/03 16:58:25 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexigraphical compares up to n characters between two strings
**
** @param	string to compare
** @param	string to compare
** @param	the number of characters to be compared between the two strings
**
** @return	1: if the strings are the identical
**			0: if they are not
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		result;

	if ((!s1 || !s2) && n > 0)
		return (0);
	result = ft_strncmp(s1, s2, n);
	if (!result)
		return (1);
	return (0);
}
