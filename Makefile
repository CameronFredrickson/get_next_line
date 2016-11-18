# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfredric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 10:56:05 by cfredric          #+#    #+#              #
#    Updated: 2016/11/18 14:24:52 by cfredric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# THE FOLLOWING LINES MAKE CERTAIN RULES EXPLICIT:
#*******************************************************************************
# avoids trouble on systems where the SHELL variable 
# might be inherited from the environment
SHELL = /bin/sh

.PHONY: all re clean fclean get_next_line

# first line clears out the suffix list, the second introduces 
# all suffixes which may be subject to implicit rules in this Makefile
.SUFFIXES:
.SUFFIXES: .c .o 
#*******************************************************************************

#===============================================================================
# FILES
#===============================================================================
NAME =	get_next_line

SRCS =	get_next_line.c	\
		main.c

OBJS = $(SRCS:.c=.o)

LIBFTHEADER = libft/includes

#===============================================================================
# FLAGS
#===============================================================================
CC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDE = -I

LIBFLAG = -L

OUTPUT = -o

COMPILE = -c

MEMERROR = -fsanitize=address

#===============================================================================
# RULES
#===============================================================================
all: $(NAME)
	@make -C libft/ fclean && make -C libft/
$(NAME):
	$(CC) $(COMPILE) $(FLAGS) -I $(LIBFTHEADER) $(SRCS)
	$(CC) $(FLAGS) $(OUTPUT) $(NAME) $(OBJS) -I $(LIBFTHEADER) $(LDFLAGS) $(LIBFLAG) libft/ -lft
clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
