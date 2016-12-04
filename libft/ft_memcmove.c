/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 21:33:02 by cfredric          #+#    #+#             */
/*   Updated: 2016/12/01 21:33:04 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*reverse_memccpy(void *dest, void *src, int c, size_t len)
{
	size_t			index;
	unsigned char	*dest_cast;
	unsigned char	*src_cast;
	unsigned char	chr;

	index = 0;
	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	chr = (unsigned char)c;
	dest_cast += len - 1;
	src_cast += len - 1;
	while (index < len)
	{
		*dest_cast-- = *src_cast--;
		if (*src_cast == chr)
			return ((void *)++dest_cast);
		index++;
	}
	return (NULL);
}

void			*ft_memcmove(void *dest, void *src, int c, size_t len)
{
	if (dest > src)
		return (reverse_memccpy(dest, src, c, len));
	return (ft_memccpy(dest, src, c, len));
}
