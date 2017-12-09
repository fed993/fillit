#include "fillit.h"

/*
 * creating map, place final tetrimino on map, printing map, and freeing map
 */

void	smallest_square(int nbr_of_pieces)
{
	int		i;
	int		x;
	int		y;
	char	**smallest_square_array;

	i = 0;
	while ((i * i) < (nbr_of_pieces * 4))
		i++;
	smallest_square_array = (char **)malloc(sizeof(char *) * (i * i));
	y = -1;
	while (++y < i)
		smallest_square_array[y] = (char *)malloc(sizeof(char) * i);
	y = 0;
	while (y < i)
	{
		x = 0;
		while (x < i)
		{
			smallest_square_array[y][x] = '.';
			x++;
		}
		y++;
	}
}

void	print_board(char ***board_array)
{
	int i;

	i = 0;
	while ((i < 104) && ((*board_array)[i] != NULL))
	{
		ft_putstr((*board_array)[i]);
		i++;
	}
}
