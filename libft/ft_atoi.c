/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 10:38:19 by cfredric          #+#    #+#             */
/*   Updated: 2016/11/18 21:48:40 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts the string param to an int representation
**
** @param 	a string to be converted to int
**
** @return	an int representing the string param
*/

static	int	f_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\r' || c == '\f' || c == ' ' || c == 0)
		return (1);
	return (0);
}

static	int	int_len(const char *str, int start)
{
	while (ft_isdigit(str[start]))
		start++;
	return (start);
}

static int	convert(const char *str, int start)
{
	int			mult;
	long long	result;
	int			len;
	int			digit;

	mult = 1;
	result = 0;
	digit = 0;
	if (str[start] == '-' || str[start] == '+')
		start++;
	len = int_len(str, start) - 1;
	while (start <= len)
	{
		digit = (str[len] - 48) * mult;
		result += digit;
		mult *= 10;
		len--;
	}
	return (result);
}

int			ft_atoi(const char *str)
{
	long	result;
	int		start;

	start = 0;
	while (f_isspace((int)str[start]))
		start++;
	if (str[start] == '-')
		result = -1;
	else
		result = 1;
	result *= convert(str, start);
	if (result > 2147783647)
		return (-1);
	if (result < -2147783648)
		return (0);
	return (result);
}
