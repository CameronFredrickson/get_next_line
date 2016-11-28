/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:17:10 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/21 10:17:11 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*new;
	size_t			index;

	new = (unsigned char *)str;
	index = 0;
	while (index < n)
	{
		new[index] = (char)c;
		index++;
	}
	return (str);
}
