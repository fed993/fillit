# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/05 10:14:45 by fpolyans          #+#    #+#              #
#    Updated: 2017/11/30 23:03:38 by fpolyans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
LIBFT = libft/libft.a
FLAGS = -g -Wall -Wextra -Werror
SRC = $(LIBFT) main.c check_and_store.c map.c read.c parse_file.c
OBJ = ${SRC:c=o}

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
