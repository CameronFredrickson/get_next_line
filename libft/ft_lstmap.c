/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 12:23:39 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/01 18:32:32 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates through a list applying the param f to each link in the list,
** creating a new list from the successive applications of f
**
** @param 	a pointer to a node in the list
** @param 	a pointer to a function applied to each node, using malloc to
**			create a new node
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*head;
	t_list		*tmp;

	if (!lst)
		return (NULL);
	head = f(lst);
	lst = lst->next;
	tmp = head;
	while (lst)
	{
		tmp->next = f(lst);
		lst = lst->next;
		tmp = tmp->next;
	}
	return (head);
}
