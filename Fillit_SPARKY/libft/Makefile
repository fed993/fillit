# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 00:00:42 by fpolyans          #+#    #+#              #
#    Updated: 2017/10/21 18:34:57 by fpolyans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = *.c

OBJECTS  = *.o

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

$(NAME):
	gcc $(FLAGS) -c -I . $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS) 

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

