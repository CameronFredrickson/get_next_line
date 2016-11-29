/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 09:07:23 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/27 09:07:25 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatenates two strings guaranteeing to NUL-terminate the result as long
** as there is at least one free byte in the destination string
**
** ft_strlcat appends the NUL-terminated string src to the
** end of dst.  It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result
**
** Note however, that if ft_strlcat traverses size characters without
** finding a NUL, the length of the string is considered to be size
** and the destination string will not be NUL-terminated (since there
** was no space for the NUL)
**
** @param	string to store the concatenation
** @param	string to be concatenated with dst
** @param	sie of the string you are trying to create
**
** @return	the total length of the string the function tried to create
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	append;
	size_t	index;
	size_t	dst_strt;
	size_t	src_len;

	dst_strt = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_strt < size)
	{
		append = size - dst_strt - 1;
		dst += dst_strt;
		index = 0;
		while (index < append)
		{
			*dst++ = *src++;
			index++;
		}
		*dst = '\0';
		return (dst_strt += src_len);
	}
	return (ft_strlen(src) + size);
}
