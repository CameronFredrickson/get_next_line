/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 20:13:34 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/26 21:09:46 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares two byte strings up to n bytes
**
** @param	byte string to be compared
** @param	byte string to be compared
** @param	the number of bytes to be compared
**
** @return	0 if the values of all bytes compared are the same
**			otherwise, the differences between the two bytes is returned
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cast;
	unsigned char	*s2_cast;
	size_t			index;

	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (s1_cast[index] != s2_cast[index])
			return (s1_cast[index] - s2_cast[index]);
		index++;
	}
	return (0);
}
