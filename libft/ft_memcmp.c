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

#include "includes/libft.h"

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
