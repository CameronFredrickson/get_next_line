/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 14:45:49 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/28 21:38:43 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Creates an allocated substring from the string s, the substring created
** starts at the start index of s and is of size len
**
** @param	the string containing the substring to be allocated
** @param	the starting index of the substring with in the string s
** @param	the length of the substring to be allocated
**
** @return	the allocated substring, of a NULL pointer if the start and
**			len params do not point to a vaild string, or if the allocation
**			fails, A NULL pointer can also be returned if the string s
**			is a NULL pointer
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			len_check;
	unsigned int	new_i;

	if (!s)
		return (NULL);
	len_check = ft_strlen(s);
	if (len > len_check || start + 1 > len_check)
		return (NULL);
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	new_i = 0;
	while (new_i < len)
	{
		new[new_i] = s[start];
		start++;
		new_i++;
	}
	return (new);
}
