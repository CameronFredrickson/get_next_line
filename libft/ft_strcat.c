/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 08:45:32 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 08:45:36 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatenates the source string to the end of the destination string
**
** @param	the string to conatin the resulting concatenation
** @param	the string to be added to the end of the dest param
*/

char	*ft_strcat(char *dest, const char *src)
{
	int		dest_i;
	int		src_i;

	dest_i = 0;
	src_i = 0;
	while (dest[dest_i])
		dest_i++;
	while (src[src_i])
		dest[dest_i++] = src[src_i++];
	dest[dest_i] = '\0';
	return (dest);
}
