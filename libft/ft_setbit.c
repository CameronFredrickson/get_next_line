/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 22:24:23 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/01 22:24:24 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets the nth bit in a byte
**
** @param	the byte in which a bit will be set
** @param	the bit to be set counting from right to left
**
** @return	the byte containing the newly set bit
*/

unsigned char	ft_setbit(unsigned char val, unsigned char nth_bit)
{
	unsigned char	new;

	new = val | (1 << nth_bit);
	return (new);
}
