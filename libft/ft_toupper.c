/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:32:46 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 17:32:47 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Gives the corresponding upper case value of an lower case character value A-Z
** @param	the value to be converted to upper case
**
** @return	if the value of the param is a valid lower case character value
**			the corresponding upper case character value is returned, otherwise
**			0 is returned
*/

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (0);
}
