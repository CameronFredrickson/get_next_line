/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 09:51:34 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/28 09:51:35 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Clears a string by setting all of the character values to 0
**
** @param	string to clear (set to 0)
*/

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	while (*s)
		*s++ = 0;
}
