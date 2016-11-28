/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:52:24 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/30 16:27:15 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		int_len(long n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (++count);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void		clear_buf(char *s, int size)
{
	int		index;

	index = 0;
	while (index < size)
		s[index++] = 0;
}

void			ft_putnbr(int n)
{
	long			new_n;
	char			buf[0x1F];
	int	unsigned	index;

	new_n = (long)n;
	index = int_len(new_n) - 1;
	clear_buf(buf, 31);
	if (new_n == 0)
		ft_putchar('0');
	if (new_n < 0)
	{
		ft_putchar('-');
		new_n *= -1;
	}
	while (new_n)
	{
		buf[index] = (char)((new_n % 10) + '0');
		new_n /= 10;
		index--;
	}
	ft_putstr(buf);
}
