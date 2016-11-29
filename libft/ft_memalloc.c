/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 08:46:58 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/28 08:47:00 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates an area in memory initialized to 0
**
** @param	the size of the memory that needs to be allocated
** @return	the allocated area in memory
*/

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			index;

	if (!(mem = malloc(sizeof(size_t) * size)))
		return (NULL);
	index = 0;
	while (index < size)
		mem[index++] = 0;
	return ((void *)mem);
}
