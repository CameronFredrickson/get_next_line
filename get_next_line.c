/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:28:08 by cfredric          #+#    #+#             */
/*   Updated: 2016/11/16 11:28:09 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** Frees the necessary information, once all of the lines have been returned
** from a t_file

** @param 	the address of the head of the list of t_files
** @param 	a pointer to the file to be freed fom the list
*/

static void		free_node(t_file **head, t_file *search)
{
	t_file	*n_to_free;
	t_file	*tmp;

	n_to_free = *head;
	if (n_to_free && n_to_free->next)
	{
		while (n_to_free && n_to_free->next)
		{
			if (n_to_free->next->fd == search->fd)
			{
				tmp = n_to_free->next;
				n_to_free->next = tmp->next;
				free(tmp->content);
				free(tmp);
				return ;
			}
			n_to_free = n_to_free->next;
		}
	}
	if (n_to_free->fd == search->fd)
	{
		free(n_to_free);
		free(n_to_free->content);
		*head = 0;
	}
}

/*
** Copies the contents of a string to a new string w/o the '\n' character

** @param 	a string to be copied

** @return	a copy of the param string without '\n' character
*/

static char		*line_cpy(char *content)
{
	char	*ln;
	int		i;

	i = 0;
	if (!content)
		return (ft_strnew(i));
	while (content[i])
	{
		if (content[i] == '\n')
			break ;
		i++;
	}
	ln = ft_strnew(i);
	i = 0;
	while (content[i])
	{
		if (content[i] == '\n')
			break ;
		ln[i] = content[i];
		i++;
	}
	return (ln);
}

/*
** Sets the line pointer to the next line in the file

** @param 	the address of the head of the list of t_files
** @param 	the address of a string to which the line from a
** file descriptor will be stored

** @return	1: a new line has been read
** @return	0: reading has been completed
*/

static int		get_line(t_file **head, t_file *file, char **line)
{
	char	*content;
	int		len;

	content = file->content_p;
	*line = line_cpy(content);
	len = (int)ft_strlen(*line);
	if (content[len] == '\n')
		file->content_p += (len + 1);
	else if (content[len] == '\0')
		file->content_p += len;
	if (content[len] == '\n' || (content[len] == '\0' && len > 0))
		return (1);
	free_node(head, file);
	return (0);
}

/*
** Stores the contents of a file descriptor in a t_file added
** to a list of t_files

** @param 	the address of the head of the list of t_files
** @param 	the file descriptor to be read from

** @return	the newly created t_file
*/

static t_file	*store_file(t_file **file_p, int fd)
{
	t_file	*file;
	char	*new_content;
	int		status;
	char	buf[BUFF_SIZE];

	ft_memset(buf, 0, BUFF_SIZE);
	if (!(file = (t_file *)malloc(sizeof(t_file))))
		return (0);
	file->content = 0;
	file->fd = fd;
	file->next = 0;
	while ((status = (int)read(fd, buf, BUFF_SIZE)))
	{
		if (status == -1)
			return (0);
		new_content = ft_strnew(ft_strlen(file->content) + status);
		ft_strcpy(new_content, file->content);
		if (file->content)
			free(file->content);
		ft_strncat(new_content, buf, status);
		file->content = new_content;
		file->content_p = new_content;
	}
	(*file_p) ? (file->next = *file_p) : (file);
	return (*file_p = file);
}

/*
** Gets a line of characters from a file descriptor

** @param 	the address of a string to which the line from a 
** file descriptor will be stored
** @param	a file descriptor

** @return	1: a new line has been read
** @return	0: reading has been completed
** @return	-1: an error has occured 
*/

int				get_next_line(const int fd, char **line)
{
	static t_file	*head;
	t_file			*file;

	if (BUFF_SIZE < 1 || BUFF_SIZE > 8192000 || fd < 0 || fd > 256 || !line)
		return (-1);
	file = 0;
	if (head)
	{
		file = head;
		while (file)
		{
			if (file->fd == fd)
				break ;
			file = file->next;
		}
	}
	if (!file)
	{
		if (!(file = store_file(&head, fd)))
			return (-1);
	}
	return (get_line(&head, file, line));
}
