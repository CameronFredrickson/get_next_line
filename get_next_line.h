/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 21:03:56 by cfredric          #+#    #+#             */
/*   Updated: 2016/11/22 21:03:58 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include "libft.h"

# define BUFF_SIZE 1
# define FCA file->content->array
# define FCS file->content->size
# define FCU file->content->used

typedef	struct		s_file
{
	t_dynamic_arr	*content;
	int				fd;
	struct s_file	*next;
	struct s_file	*prev;
}					t_file;

int					get_next_line(const int fd, char **line);

#endif
