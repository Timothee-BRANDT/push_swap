# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 15:11:17 by tbrandt           #+#    #+#              #
#    Updated: 2022/03/08 16:05:01 by tbrandt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -g #-fsanitize=address
NAME	=	push_swap

SRC		=	main.c			\
			check_error.c	\
			print_list.c	\
			utils.c			\
			swap.c			\
			push.c			\
			rotate.c		\
			create_list.c	\
			algo.c			\
			algo2.c			\
			utils2.c		\

OBJ		=	$(SRC:%.c=%.o)

all: $(NAME)

$(NAME): libft/libft.a $(OBJ)
	$(CC) ${CFLAGS} -o $(NAME) $(OBJ) -I include -L libft -lft

libft/libft.a:
	make -C libft 

%.o: %.c
	$(CC) ${CFLAGS} -o $@ -c $<

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all run clean fclean re make_libft
