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

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			len_check;
	unsigned int	new_i;

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
