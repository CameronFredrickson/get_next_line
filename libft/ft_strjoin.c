/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:38:54 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/28 22:29:53 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Produces an allocated string as a result of the concatenation of two strings
**
** @param	string to be joined
** @param	string to be joined
**
** @return	the newly concatenated string, however if the allocation fails
**			NULL is returned
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;

	if (!s1 || !s2)
		return (NULL);
	if (!(cat = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(cat, s1);
	ft_strcat(cat, s2);
	return (cat);
}
