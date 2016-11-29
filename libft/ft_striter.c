/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:09:35 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/28 10:23:00 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character in the string
**
** @param	string to be motified
** @param	function used to modify each character in the string
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s)
		return ;
	while (*s)
		f(s++);
}
