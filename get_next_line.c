/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:47:03 by cfredric          #+#    #+#             */
/*   Updated: 2016/11/13 10:47:47 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		free_node(t_list **fd_p, t_list *search)
{
	t_list	*n_to_free;
	t_list	*tmp;
	int		fd;
	int		flag;

	n_to_free = *fd_p;
	fd = (int)search->content_size;
	flag = 0;
	while (n_to_free && n_to_free->next)
	{
		flag = 1;
		if ((int)n_to_free->next->content_size == fd)
		{
			tmp = n_to_free->next;
			n_to_free->next = tmp->next;
			free(tmp->content);
			free(tmp);
		}
		n_to_free = n_to_free->next;
	}
	if (!flag && (int)(*fd_p)->content_size == fd)
	{
		free(*fd_p);
		*fd_p = 0;
	}
}

static char		*line_cpy(char *content)
{
	char	*ln;
	int		i;

	i = 0;
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
// if *line is null return 0
static int		get_line(t_list **fd_p, t_list *file, char **line)
{
	char	*content;
	int		len;

	content = (char *)file->field;
	if (!content)
		return (0);
	*line = line_cpy(content);
	len = (int)ft_strlen(*line);
	if (content[len] == '\n')
		file->field += (len + 1);
	if (content[len] == '\n' && *line)
		return (1);
	else
		return (0);
	if (!content[len] && *line)
	{
		free_node(fd_p, file);
		if (!*fd_p)
			free(fd_p);
		return (1);
	}
	return (0);
}

// static int		get_line(t_list **fd_p, t_list *file, char **line)
// {
// 	char	*content;
// 	int		len;

// 	content = (char *)file->field;
// 	if (!content)
// 		return (0);
// 	*line = line_cpy(content);
// 	len = (int)ft_strlen(*line);
// 	if (content[len] == '\n' && content[len + 1])
// 	{
// 		file->field += (len + 1);
// 		return (1);
// 	}
// 	else
// 	{
// 		free_node(fd_p, file);
// 		if (!*fd_p)
// 			free(fd_p);
// 		return (1);
// 	}
// 	return (0);
// }

static t_list	*store_file(t_list **file_p, int fd)
{
	t_list	*file;
	char	*new_content;
	int		status;
	char	buf[BUF_SIZE];

	file = ft_lstnew("tmp", fd);
	file->content = 0;
	while ((status = (int)read(fd, buf, BUF_SIZE)))
	{
		if (status == -1)
			return (0);
		new_content = ft_strnew(ft_strlen(file->content) + BUF_SIZE);
		ft_strcpy(new_content, file->content);
		if (file->content)
			free(file->content);
		ft_strncat(new_content, buf, BUF_SIZE);
		file->content = new_content;
		file->field = new_content;
	}
	(*file_p) ? (ft_lstadd(file_p, file)) : (*file_p = file);
	return (file);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	**head;
	t_list			*search;

	if (fd < 0 || BUF_SIZE < 1 || !line)
		return (-1);
	search = 0;
	if (!head)
	{
		if (!(head = (t_list **)malloc(sizeof(t_list *))))
			return (-1);
		*head = 0;
	}
	else
	{
		search = *head;
		while (search)
		{
			if ((int)search->content_size == fd)
				break ;
			search = search->next;
		}
	}
	if (!search)
		if (!(search = store_file(head, fd)))
			return (-1);
	return (get_line(head, search, line));
}
