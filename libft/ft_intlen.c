/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 22:05:03 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/01 22:05:04 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Gives the length of a long int
**
** @param 	a long
**
** @return	a long int representing the length of the param
*/

long	int_len(long n)
{
	int		count;

	count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}
