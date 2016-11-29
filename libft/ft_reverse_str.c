/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 15:19:46 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/02 15:19:54 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Reverses the characters of a string in place
**
** @param	the character string to be reversed
**
** @return	the reversed character string
*/

char	*ft_reverse_str(char *s)
{
	size_t		swaps;
	size_t		index;
	size_t		end;
	size_t		len;
	char		temp;

	len = ft_strlen(s);
	end = len - 1;
	swaps = len / 2;
	index = 0;
	if (!s)
		return (NULL);
	while (index < swaps)
	{
		temp = s[index];
		s[index] = s[end];
		s[end] = temp;
		index++;
		end--;
	}
	return (s);
}
