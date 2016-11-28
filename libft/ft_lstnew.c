/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 09:09:16 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/01 10:03:45 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*dest;
	void	*content_cpy;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		dest = ft_memalloc(content_size);
		if (!dest)
			return (NULL);
		content_cpy = ft_memcpy(dest, content, content_size);
		new->content = (void *)content_cpy;
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
