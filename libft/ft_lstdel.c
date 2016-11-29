/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 10:39:23 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/01 11:22:14 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes the contents of a list
**
** @param 	the address of the pointer to head of the list
** @param 	a pointer to a function used to free the members of each node in
**			the list
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while (*alst)
	{
		tmp = *alst;
		*alst = (*alst)->next;
		del((tmp)->content, (tmp)->content_size);
		free(tmp);
	}
}
