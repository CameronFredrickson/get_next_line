/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:04:41 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/26 16:52:35 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void		*reverse_memcpy(void *dest, void *src, size_t len)
{
	size_t			index;
	unsigned char	*dest_cast;
	unsigned char	*src_cast;

	index = 0;
	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	dest_cast += len - 1;
	src_cast += len - 1;
	while (index < len)
	{
		*dest_cast-- = *src_cast--;
		index++;
	}
	return ((void *)dest);
}

void			*ft_memmove(void *dest, void *src, size_t len)
{
	if (dest > src)
		return (reverse_memcpy(dest, src, len));
	else
		return (ft_memcpy(dest, src, len));
}
