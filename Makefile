# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chrattan <chrattan@42bangkok.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 21:39:33 by chrattan          #+#    #+#              #
#    Updated: 2022/10/24 05:38:50 by chrattan         ###   ########.fr        #
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
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_strlen.c
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

