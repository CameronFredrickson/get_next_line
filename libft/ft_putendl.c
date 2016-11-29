/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 16:00:40 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/29 16:06:35 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs a string to the standard output
**
** @param	string to be written
*/

void	ft_putendl(char const *s)
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
	c = '\n';
	write(1, &c, 1);
}
