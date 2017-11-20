SOURCES = main.c read_tets.c libft/*.c print2dchararr.c parse_file.c

OBJECTS = main.o read_tets.o

HEADERS = header

FLAGS = -Wall -Wextra -Werror

LIBRARY = fillit.a

all:
	gcc $(FLAGS) -I $(HEADERS) -o aaaaa $(SOURCES)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIBRARY)

re: fclean all

