# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 06:54:34 by wde-mell          #+#    #+#              #
#    Updated: 2018/05/12 17:36:07 by wde-mell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS =	ft_strcpy.c \
		ft_strncpy.c \
	   	ft_strcat.c \
	   	ft_strlcat.c \
		ft_strlen.c \
		ft_strnjoin.c \
		ft_simple_new_list.c \
		ft_strlen_size.c \
		ft_strncat.c \
	   	ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
	   	ft_strdup.c	\
		ft_strchr.c \
		ft_atoi.c \
		ft_strrchr.c \
		ft_isalpha.c \
	   	ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_memalloc.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
	   	ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
	   	ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
	    ft_strnequ.c \
		ft_strsub.c	\
		ft_strjoin.c \
		ft_strtrim.c \
	   	ft_strsplit.c \
		ft_itoa.c \
		ft_lstnew.c	\
		ft_lstdelone.c \
		ft_lstdel.c \
	   	ft_lstadd.c	\
		ft_lstiter.c \
		ft_lstmap.c \
		ft_swap.c \
		ft_strrev.c \
		ft_table_sort.c \
		ft_recursive_power.c \
		ft_iscntrl.c 

OBJS = $(SRCS:.c=.o)

.PHONY: all

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

.PHONY: clean fclean re

clean: 
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re : fclean all
