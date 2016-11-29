/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 15:55:23 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/29 15:59:01 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes a character string to the standard output
**
** @param	the character string to be written
*/

void	ft_putstr(char const *s)
{
	unsigned int	i;
	char			c;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		c = s[i];
		write(1, &c, 1);
		i++;
	}
}
