/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:59:29 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/30 16:01:52 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Gives the length of a long int
**
** @param 	a long
**
** @return	an int representing the length of the param
*/

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

/*
** Sets all of the characters in a string to 0
**
** @param 	a string a characters
** @param 	the length of the string
*/

static void		clear_buf(char *s, int size)
{
	int		index;

	index = 0;
	while (index < size)
		s[index++] = 0;
}

/*
** Writes an int to the file descriptor given
**
** @param 	the int to be written to the file descriptor
** @param 	the file descriptor to be written to
*/

void			ft_putnbr_fd(int n, int fd)
{
	long			new_n;
	char			buf[0x1F];
	unsigned int	index;

	new_n = (long)n;
	index = int_len(new_n) - 1;
	clear_buf(buf, 31);
	if (new_n == 0)
		ft_putchar_fd('0', fd);
	if (new_n < 0)
	{
		ft_putchar_fd('-', fd);
		new_n *= -1;
	}
	while (new_n)
	{
		buf[index] = (char)((new_n % 10) + '0');
		new_n /= 10;
		index--;
	}
	ft_putstr_fd(buf, fd);
}
