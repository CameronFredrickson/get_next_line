/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:40:55 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/21 10:40:56 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;
	int		index;

	count = 0;
	index = 0;
	if (!str)
		return (0);
	while (str[index])
	{
		count++;
		index++;
	}
	return (count);
}
