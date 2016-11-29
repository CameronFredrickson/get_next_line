/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:53:23 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/21 19:53:24 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies the characters from the source string to the destination string
**
** @param	string to copy from
** @param	string to copy to
**
** @return	the new copy of the source string
*/

char	*ft_strcpy(char *dest, const char *src)
{
	int		index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
