/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 09:20:49 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/28 09:24:11 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*alloc;

	alloc = (char *)malloc(sizeof(char) * (size + 1));
	if (!alloc)
		return (NULL);
	ft_memset(alloc, 0, size + 1);
	return (alloc);
}
