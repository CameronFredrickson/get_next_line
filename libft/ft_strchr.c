/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:27:23 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/23 14:27:24 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurence of a character in a string
**
** @param	the string to be searched
** @param	the character value to be located
**
** @return	a string with the located character at the starting address
**			of the string, otherwise NULL is returned
*/

char	*ft_strchr(const char *s, int c)
{
	char			*new_str;

	new_str = (char *)s;
	while (1)
	{
		if (*new_str == c)
			return (new_str);
		else if (*new_str == 0)
			return (NULL);
		new_str++;
	}
}
