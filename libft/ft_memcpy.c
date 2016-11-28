/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:13:10 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 18:13:11 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_str;
	unsigned char	*src_str;
	size_t			index;

	dest_str = (unsigned char *)dest;
	src_str = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		dest_str[index] = src_str[index];
		index++;
	}
	return (dest);
}
