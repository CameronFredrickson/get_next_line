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

#include "includes/libft.h"

void	ft_putendl(char const *s)
{
	unsigned int	i;
	char			c;

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