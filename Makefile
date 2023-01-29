# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chrattan <chrattan@42bangkok.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 21:39:33 by chrattan          #+#    #+#              #
#    Updated: 2023/01/27 12:31:21 by chrattan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_memcmp.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strlcpy.c \
	  ft_strrchr.c
LIBC	= ar -rcs
CC	= gcc -Wall -Werror -Wextra -std=c99
RM	= rm -rf
OBJS	= $(SRCS:.c=.o)
OBBJS	= $(BONUS_SRCS:.c=.o)

%o: %c
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

bonus: $(OBBJS)
	$(LIBC) $(NAME) $(OBBJS)

clean:
	$(RM) $(OBJS) $(OBBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

