/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 20:26:19 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/21 20:26:20 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies up to n characters from the source string to the destination
**
** @param	the string to be copied to
** @param	the string to be copied from
** @param	the number of characters to be copied
**
** @return	the newly copied string
*/

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		if (!src[index])
			break ;
		index++;
	}
	if (index < n)
	{
		index++;
		while (index < n)
		{
			dest[index] = '\0';
			index++;
		}
	}
	return (dest);
}
