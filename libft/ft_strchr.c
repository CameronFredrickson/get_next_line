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

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*new_str;
	size_t			index;
	size_t			len;

	len = ft_strlen(s);
	new_str = (char *)s;
	index = 0;
	while (1)
	{
		if (*new_str == c)
			return (new_str);
		else if (*new_str == 0)
			return (NULL);
		index++;
		new_str++;
	}
}
