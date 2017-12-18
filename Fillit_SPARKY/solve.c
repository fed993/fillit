void    place_piece(int x, int y, char **map, t_triminos *tetriminos)
{
	int i;

	i = 0;
	while (i < 4)
	{
		map[tetriminos->y[i] + y][tetriminos->x[i] + x] = tetriminos->alpha;
		i++;
	}
}

void    remove_piece(int x, int y, char **map, t_triminos *tetriminos)
{
	int i;

	i = 0;
	while (i < 4)
	{
		map[tetriminos->y[i] + y][tetriminos->x[i] + x] = '.';
		i++;
	}
}

int        solve(t_triminos *tetriminos, char **map)
{
	int x;
	int y;

	y = 0;
	if (tetriminos->next == NULL)
		return (1);
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == '.' && validate_piece(x, y, tetriminos, map))
			{
				place_piece(x, y, map, tetriminos);
				if (solve(tetriminos->next, map))
					return (1);
				remove_piece(x, y, map, tetriminos);
			}
			x++;
		}
		y++;
	}
	return (0);
}
