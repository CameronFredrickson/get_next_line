/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:36:29 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 20:36:29 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_cast;
	unsigned char	*src_cast;
	unsigned char	chr;
	size_t			index;

	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	chr = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		*dest_cast = *src_cast;
		if (*src_cast == chr)
			return ((void *)++dest_cast);
		index++;
		dest_cast++;
		src_cast++;
	}
	dest_cast = NULL;
	return (dest_cast);
}
