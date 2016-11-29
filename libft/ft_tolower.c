/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:41:36 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 17:41:37 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Gives the corresponding lower case value of an upper case character value A-Z
** @param	the value to be converted to lower case
**
** @return	if the value of the param is a valid upper case character value
**			the corresponding lower case character value is returned, otherwise
**			0 is returned
*/

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (0);
}
