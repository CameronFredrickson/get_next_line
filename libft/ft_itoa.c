/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:12:57 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/30 16:13:30 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts an integer to a string representation of its value
**
** @param 	an int
**
** @return	a string representation of the param
*/

static size_t	int_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char		*result;
	size_t		index;
	long		new_n;

	new_n = (long)n;
	index = int_len(new_n);
	result = ft_strnew(index);
	if (!result)
		return (NULL);
	index--;
	if (new_n < 0)
	{
		result[0] = '-';
		new_n *= -1;
	}
	if (new_n == 0)
		result[0] = '0';
	while (new_n)
	{
		result[index] = new_n % 10 + '0';
		new_n /= 10;
		index--;
	}
	return (result);
}
