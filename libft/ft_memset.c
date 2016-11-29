/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:17:10 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/21 10:17:11 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fills a byte string with a byte value
**
** @param 	byte string
** @param 	the byte value to fill the byte string with
** @param	the number of bytes to be replaced
**
** @return	a pointer to the newly set memory
*/

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*new;
	size_t			index;

	new = (unsigned char *)str;
	index = 0;
	while (index < n)
		new[index++] = (unsigned char)c;
	return (str);
}
