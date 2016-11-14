/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:04:33 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/27 19:04:34 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 32

# include <fcntl.h>
# include <stdlib.h>
# include "libft/includes/libft.h"

int		get_next_line(const int fd, char **line);

#endif
