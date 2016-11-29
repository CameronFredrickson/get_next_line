/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:01:42 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 18:01:44 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes zeros to each byte in a byte string
**
** @param 	a byte string
**
** @param	the number of bytes in string
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*mem;
	size_t			index;

	mem = (unsigned char *)s;
	index = 0;
	while (index < n)
		mem[index++] = 0;
}
