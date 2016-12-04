/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 21:03:49 by cfredric          #+#    #+#             */
/*   Updated: 2016/11/22 21:03:51 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** Frees a file node and sets the head appropiately if necessary
**
** @param	a pointer to the head of the list of t_files
** @param	a pointer to a t_file node
*/

static void		free_node(t_file **head, t_file *file)
{
	if (file->prev && file->next)
	{
		file->prev->next = file->next;
		file->next->prev = file->prev;
	}
	else if (file->next)
	{
		file->next->prev = file->prev;
		*head = file->next;
	}
	else if (file->prev)
		file->prev->next = file->next;
	else
		*head = 0;
	free_arr(file->content);
	free(file);
}

/*
** Copies the contents of the line to be returned in to the newly allocated
** string. The contents after the line read in the file are then moved to the
** starting address of the content pointer. The content existing after the
** content moved is then cleared (filled in with '\0' characters).
**
** @param	a pointer to the head of the list of t_files
** @param	a pointer to a t_file node
** @param	the address of a character pointer where the contents of the
**			the next line will be copied to
** @param	the counter used to traverse the contents of a file node
**
** @return	1: a new line was read
**			0: there is nothing left to read from the file descriptor
*/

static int		get_line(t_file **head, t_file *file, char **line, size_t i)
{
	int		flag;

	flag = 0;
	while (i < FCU + 1)
	{
		if ((FCA)[i] == '\n' || (FCA)[i] == '\0')
		{
			if ((FCA)[i] == '\n')
				flag = 1;
			ft_memset(FCA, 0, (i + 1));
			ft_memmove(FCA, (FCA + i + 1), (FCU - i));
			ft_memset(FCA + ft_strlen(FCA) + 1, 0, FCS - ft_strlen(FCA));
			FCU -= (i + 1);
			break ;
		}
		(*line)[i] = (FCA)[i];
		i++;
	}
	if (flag || ((FCA)[i] == '\0' && **line))
		return (1);
	free_node(head, file);
	return (0);
}

/*
** Allocates a new node to be used to hold the information of a file
**
** @param	a pointer to the head of the list of t_files
** @param	a pointer to a t_file node
** @param	a file descriptor to be stored in a node
**
** @return	the newly allocated node, or 0 if a call to malloc fails
*/

static t_file	*create_node(t_file **head, t_file *file, int fd)
{
	t_dynamic_arr	*arr;

	if (!((file = (t_file *)malloc(sizeof(t_file)))))
		return (0);
	if (!((arr = (t_dynamic_arr *)malloc(sizeof(t_dynamic_arr)))))
		return (0);
	file->fd = fd;
	file->next = 0;
	file->prev = 0;
	file->content = init_arr(arr, 2);
	if (*head)
	{
		file->next = *head;
		(*head)->prev = file;
	}
	*head = file;
	return (file);
}

/*
** Attempts to read BUFF_SIZE characters from a file descriptor.
** The characters read are stored in the content member of a
** pointer to t_file. The read buffer is then checked for a '\n'
** character, if one is found the reading stops, otherwise
** the reading continues until read returns 0.
**
** @param	a pointer to the head of the list of t_files
** @param	a pointer to a t_file node
** @param	a file descriptor to be read from
**
** @return	the pointer to t_file passed to the function
**			0: 	-1 is returned from the read function
**				malloc fails in the call to create_node
**				malloc fails in the call to insert_arr
*/

static t_file	*read_line(t_file **head, t_file *file, int fd)
{
	int		status;
	char	buf[BUFF_SIZE];
	int		i;

	ft_memset(buf, 0, BUFF_SIZE);
	if (!file)
		if (!(file = create_node(head, file, fd)))
			return (0);
	while ((status = read(fd, buf, BUFF_SIZE)))
	{
		if (status == -1)
			return (0);
		i = 0;
		while (i < status)
		{
			if (!(insert_arr(file->content, buf[i++])))
				return (0);
		}
		if (ft_strnstr(buf, "\n", status))
			break ;
	}
	return (file);
}

/*
** Assigns the next line read from a file to the value of
** the line argument passed to the function
**
** @param	the file descriptor from which the next line
**			will be retrieved
** @param	the address of a character pointer to be assigned
**			the value of the next line read
**
** @return	1: the next line was succussfully retrieved
**			0: reading of the file has finished
**			-1: an error has occured
*/

int				get_next_line(const int fd, char **line)
{
	static t_file	*head;
	t_file			*file;

	if (BUFF_SIZE < 0 || BUFF_SIZE > 8192000 || fd < 0 || !line)
		return (-1);
	file = 0;
	if (head)
	{
		file = head;
		while (file)
		{
			if (fd == file->fd)
				break ;
			file = file->next;
		}
	}
	if (!file || !(ft_strchr(FCA, '\n')))
		if (!(file = read_line(&head, file, fd)))
			return (-1);
	if (!(*line = ft_strchr(FCA, '\n')))
		if (!(*line = ft_strnew(ft_strlen(FCA))))
			return (-1);
	if (**line == '\n' && !(*line = ft_strnew((*line - FCA))))
		return (-1);
	return (get_line(&head, file, line, 0));
}
