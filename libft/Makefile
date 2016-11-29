# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfredric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 09:35:23 by cfredric          #+#    #+#              #
#    Updated: 2016/11/29 11:06:17 by cfredric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SOURCE  = 	ft_memset.c		ft_memalloc.c	ft_lstnew.c				\
			ft_bzero.c		ft_memdel.c		ft_lstdelone.c			\
			ft_memcpy.c		ft_strnew.c		ft_lstdel.c				\
			ft_memccpy.c	ft_strdel.c		ft_lstadd.c				\
			ft_memmove.c	ft_strclr.c		ft_lstiter.c			\
			ft_memchr.c		ft_striter.c	ft_lstmap.c				\
			ft_memcmp.c		ft_striteri.c							\
			ft_strlen.c		ft_strmap.c		ft_isspace.c			\
			ft_strdup.c		ft_strmapi.c	ft_intlen.c				\
			ft_strcpy.c		ft_strequ.c		ft_setbit.c				\
			ft_strncpy.c	ft_strnequ.c	ft_print_binary_octet.c	\
			ft_strcat.c		ft_strsub.c		ft_reverse_str.c		\
			ft_strncat.c	ft_strjoin.c	\
			ft_strlcat.c	ft_strtrim.c	\
			ft_strchr.c		ft_strsplit.c	\
			ft_strrchr.c	ft_itoa.c		\
			ft_strstr.c		ft_putchar.c	\
			ft_strnstr.c	ft_putstr.c		\
			ft_strcmp.c		ft_putendl.c	\
			ft_strncmp.c	ft_putnbr.c		\
			ft_atoi.c		ft_putchar_fd.c	\
			ft_isalpha.c	ft_putstr_fd.c	\
			ft_isdigit.c	ft_putendl_fd.c	\
			ft_isalnum.c	ft_putnbr_fd.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c

HEADERS = includes

OBJS = 	$(SOURCE:.c=.o)

CC = gcc

MEMERROR = -fsanitize=address

CFLAGS = -c -Wall -Wextra -Werror

LIBFLAG = -L

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCE) -I $(HEADERS)
	ar -rc $(NAME).a $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME).a

re: fclean all
