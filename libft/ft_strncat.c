/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 09:21:47 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 09:21:48 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_i;
	size_t	src_size_t;

	dest_i = ft_strlen(dest);
	src_size_t = 0;
	while (src_size_t < n)
	{
		if (!src[src_size_t])
			break ;
		dest[dest_i] = src[src_size_t];
		src_size_t++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
