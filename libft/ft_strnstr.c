/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 13:50:39 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/27 13:50:40 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		b_index;
	size_t		b_save;
	size_t		l_index;
	char		*cast;

	b_index = 0;
	b_save = 0;
	l_index = 0;
	cast = (char *)big;
	if (!*little)
		return (cast);
	while (b_index < len && cast[b_index])
	{
		l_index = 0;
		b_index = b_save;
		while (b_index < len && cast[b_index++] == little[l_index])
		{
			if (little[l_index + 1] == 0)
				return (cast += (b_index - 1 - l_index));
			l_index++;
		}
		b_save++;
	}
	return (NULL);
}
