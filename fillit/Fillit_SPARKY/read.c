/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 19:46:03 by rliu              #+#    #+#             */
/*   Updated: 2017/11/30 22:56:02 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Read fd in argv[1], find a way to store it somewhere, what type of data
 * 		structure we should use, find buf size, open fd and go to check file to
 * 		check if it is a valid fd, if correct store it in our struct.
 */

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

void	create_board_array(int fd, char ***board_array)
{
	int		x;
	int		y;
	char	buf;

	y = 0;
	x = 0;
	while (read(fd, &buf, 1) > 0)
	{
		if (buf == '\n')
		{
			(*board_array)[y][x] = buf;
			y++;
			x = 0;
			continue ;
		}
		(*board_array)[y][x] = buf;
		x++;
	}
	while (y < (26 * 5))
	{
		free((*board_array)[y]);
		(*board_array)[y++] = NULL;
	}
}
