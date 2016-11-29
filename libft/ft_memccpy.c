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

#include "libft.h"

/*
** Copies the bytes from src to dst, up to n bytes. However if the character
** c occurs in the string src, the copy stops and a pointer to the byte after
** the copy of c in the string dst is returned
**
** @param	destination of the copied byte string
** @param	source of the copied byte string
** @param	the character converted to an signed char which can stop the copy
** @param	the number of bytes to be copied
**
** @return	the destination of the copied byte string
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_cast;
	unsigned char	*src_cast;
	unsigned char	chr;
	size_t			index;

	dst_cast = (unsigned char *)dst;
	src_cast = (unsigned char *)src;
	chr = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		*dst_cast = *src_cast;
		if (*src_cast == chr)
			return ((void *)++dst_cast);
		index++;
		dst_cast++;
		src_cast++;
	}
	dst_cast = NULL;
	return (dst_cast);
}
