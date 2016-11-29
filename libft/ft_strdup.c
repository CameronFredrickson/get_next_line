/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 12:57:14 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/21 12:57:15 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Creates a allocated copy of a given string
**
** @param	string to copy
**
** @return	the newly duplicated string
*/

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	count;

	count = ft_strlen(s1) + 1;
	if (!(copy = (char *)malloc(sizeof(char) * count)))
		return (NULL);
	ft_strcpy(copy, s1);
	if (copy == NULL)
		return (NULL);
	return (copy);
}
