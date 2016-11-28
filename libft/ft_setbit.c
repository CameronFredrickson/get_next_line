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

#include "includes/libft.h"

unsigned char	ft_setbit(unsigned char val, unsigned char nth_bit)
{
	unsigned char	new;

	new = val | (1 << nth_bit);
	return (new);
}
