/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 08:49:31 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/03 16:58:05 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Tells the caller whether or not the argument passed is a valid white space
** character
**
** @param	an int representing the value of a character to be tested
**
** @return	1: if the value is a valid white space character
**			0: if the value is not a valid white space character
*/

static int	f_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

/*
** Creates an allocated copy of the string s without white space at the
** begining or at the end of the string
**
** @param	the string to be copied
**
** @return	the copied string without whitespace at the
** 			begining or at the end of the string
**			NULL if s is a NULL pointer or with the allocation fails
*/

char		*ft_strtrim(char const *s)
{
	unsigned int	index;
	size_t			new_len;
	char			*new;

	if (!s)
		return (NULL);
	index = 0;
	while (ft_isspace(s[index]))
		index++;
	new_len = ft_strlen(s) - 1;
	if (index == new_len + 1)
	{
		new = ft_strnew(0);
		return (new);
	}
	while (f_isspace(s[new_len]))
		new_len--;
	if (index == 0 && new_len + 1 == ft_strlen(s))
		return (ft_strdup(s));
	new = ft_strsub(s, index, new_len - index + 1);
	if (!new)
		return (NULL);
	return (new);
}
