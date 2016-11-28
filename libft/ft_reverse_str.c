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

#include "includes/libft.h"

char	*ft_reverse_str(char *s)
{
	size_t		swaps;
	size_t		index;
	size_t		end;
	char		temp;

	end = ft_strlen(s) - 1;
	swaps = ft_strlen(s) / 2;
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
