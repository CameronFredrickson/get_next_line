/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_binary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 22:29:42 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/01 22:29:43 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the bits of an unsigned char octet
**
** @param	a octet of bits as an unsigned char
*/

void	ft_print_binary_octet(unsigned char octet)
{
	char	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (octet & 1 << bit)
			ft_putchar('1');
		else
			ft_putchar('0');
		ft_putchar(' ');
		bit--;
	}
	ft_putchar('\n');
}
