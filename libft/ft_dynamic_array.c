/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynamic_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:02:52 by cfredric          #+#    #+#             */
/*   Updated: 2016/11/30 19:02:53 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Initializes a pointer to t_dynamic_arr with the proper members
**
** @param	pointer to t_dynamic_arr to be initailized
** @param	size to initalize the pointer to t_dynamic_arr with
**
** @return	the initialized pointer to t_dynamic_arr or 0 if malloc fails
**			and returns a NULL pointer
*/

t_dynamic_arr	*init_arr(t_dynamic_arr *arr, size_t initial_size)
{
	if (!(arr->array = ft_strnew(initial_size)))
		return (0);
	arr->used = 0;
	arr->size = initial_size;
	return (arr);
}

/*
** Inserts a new character into the dynamic array
**
** @param	pointer to t_dynamic_arr to add new element to
** @param	character to be added to dynamic array
**
** @return	0: if malloc fails and returns a NULL pointer
**			1: if the insertion is successful
*/

int				insert_arr(t_dynamic_arr *arr, char c)
{
	char	*new_alloc;

	if (arr->used == arr->size)
	{
		arr->size *= 2;
		if (!(new_alloc = ft_strnew(arr->size)))
			return (0);
		ft_strcpy(new_alloc, arr->array);
		free(arr->array);
		arr->array = new_alloc;
	}
	arr->array[arr->used++] = c;
	return (1);
}

/*
** Frees a pointer to t_dynamic_arr setting all of its members to 0
**
** @param	pointer to t_dynamic_arr to be freed
*/

void			free_arr(t_dynamic_arr *arr)
{
	free(arr->array);
	arr->array = 0;
	arr->used = 0;
	arr->size = 0;
}
