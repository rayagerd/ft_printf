# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 16:05:39 by rgerdzhi          #+#    #+#              #
#    Updated: 2024/08/14 18:36:49 by rgerdzhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_DIR = libft/

SRCS = ft_printf.c ft_printf_utils.c 

OBJ = $(SRCS:.c=.o)

# **************************************************************************** #
#                                 VARIABLES                                    #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBFT = $(LIB_DIR)libft.a

# **************************************************************************** #
#                                 RULES                                        #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar -q $(NAME) $(OBJ)

$(LIBFT):
	@make -C $(LIB_DIR)

%.o: %.c $(PRINTF_DIR) ft_printf.h Makefile libft.h
	$(CC) $(CFLAGS) -I $(LIB_DIR) -c $< -o $@

test: $(NAME)
	cc $(NAME)
	./a.out

clean:
	@make -C $(LIB_DIR) clean
	rm -f $(OBJ)

fclean: clean
	@make -C $(LIB_DIR) fclean
	rm -f $(NAME)
	rm -f ./a.out

re: fclean all

.PHONY: all clean fclean re
