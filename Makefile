# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 16:05:39 by rgerdzhi          #+#    #+#              #
#    Updated: 2024/08/05 20:19:12 by rgerdzhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c 

OBJ = $(SRCS:.c=.o)

# **************************************************************************** #
#                                 VARIABLES                                    #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

# **************************************************************************** #
#                                 RULES                                        #
# **************************************************************************** #

all: $(NAME)


$(NAME): $(OBJ)
	ar -q $(NAME) $(OBJ)

%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(OBJ_B)
	ar -q $(NAME) $(OBJ) $(OBJ_B)
	@touch bonus

clean:
	rm -f $(OBJ) $(OBJ_B)
	rm -f bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

