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

#include "libft.h"

/*
** Copies len bytes from one byte string to another
** This is done in a non-destructive manner.
** Reverse_memcpy is used in cases where normal copying can be destructive
** to the memory being copied, i.e. where memory overlaps
**
** I want to copy 'a', 'b', 'c' into memory contatining 'c', 'd', 'e'
** (these locations in memory overlap)
**
**         | c | d | e |
** | a | b | c |
**
** If 'a' is copied to the location conatining 'c',
** I will not be able to copy 'c' to the location containing 'e'
**
**         | c | d | e |
** | a | b | c |
**
**
** After 'a' is copied:
**
**         | a | d | e |
** | a | b | a |
**
** the value of at location of 'c' is now 'a'.
**
** In order to avoid these circumstances we will copy from the back of the
** source string in situations where the destination string
** exists at larger address value than the source string
** and the location of the two strings overlap in memory
** i.e "reverse memcpy"
**
**         | c | d | e |
** | a | b | c |
**
**         | c | d | c |
** | a | b | c |
**
**         | c | b | c |
** | a | b | c |
**
**         | a | b | c |
** | a | b | a |
**
** @param	byte string to be copied
** @param	byte string containing the copied bytes
** @param	the number of bytes to be copied
**
** @return	the newly copied byte string
*/

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
