/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 10:20:43 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/25 10:45:25 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;
	unsigned char	chr;
	size_t			index;

	s_cast = (unsigned char *)s;
	chr = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (*s_cast == chr)
			return ((void *)s_cast);
		s_cast++;
		index++;
	}
	return (NULL);
}
