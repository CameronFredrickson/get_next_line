/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 09:20:49 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/28 09:24:11 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates a new NUL-terminated string of length size, where each character
** in the string is initialized to 0
**
** @param	the size of the allocated string
**
** @return	the allocated string
*/

char	*ft_strnew(size_t size)
{
	char	*alloc;

	alloc = (char *)malloc(sizeof(char) * (size + 1));
	if (!alloc)
		return (NULL);
	ft_memset(alloc, 0, size + 1);
	return (alloc);
}
