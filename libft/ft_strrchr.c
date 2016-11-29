/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 19:06:07 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/23 19:06:08 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurence of the character value c in the string s
**
** @param	the string to be searched
** @param	the charater to be searched for
**
** @return	a pointer to the first location of the character c in the string s
**			if the character c is not found within the string s a NULL pointer
**			is returned
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*new_str;
	int		index;
	int		find_flag;

	new_str = (char *)s;
	index = ft_strlen(s) + 1;
	find_flag = 0;
	while (index > 0)
	{
		index--;
		if (new_str[index] == c)
		{
			find_flag = 1;
			break ;
		}
	}
	if (!find_flag)
	{
		new_str = NULL;
		return (new_str);
	}
	return (new_str + index);
}
