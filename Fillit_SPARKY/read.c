#include "fillit.h"

int		get_fd(int argc, char **argv)
{
	int fd;

	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		fd = -1;
	return (fd);
}

void	create_board_array(char ***board_array, char **file_string)
{
	int		x;
	int		y;

	y = 0;
	x = 0;
	while (**file_string != '\0')
	{
		if (**file_string == '\n')
		{
			(*board_array)[y][x] = **file_string;
			y++;
			(*file_string)++;
			x = 0;
			continue ;
		}
		(*board_array)[y][x] = **file_string;
		x++;
		(*file_string)++;
	}
	while (y < (MAX_TETS * TET_HEIGHT))
	{
		free((*board_array)[y]);
		(*board_array)[y++] = NULL;
	}
}
