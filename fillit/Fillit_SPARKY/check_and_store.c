#include "fillit.h"
/*
 * CHECK FOR ERRORS IN THE FILE
 * 		if the file contains at least 1 error, your program must display error
 * 		on the standard output and will exit properly.
 * Check if there is a valid chunk given in fd. check if there is only hashes
 * 		and dots. check if it's an actual tetrimino shape? and if all valid, store
 * 		it/create it? with A's and letters and shit
 */


//  void lst_tetromino_store()
//  {
//      //this function will store the valid tetrominos so that we can sort them in
//      //the next algorithm
// }

// int   check_hashes(char ****board_array)
// {
// 	int connect;
// 	int x;
// 	int y;
//
// 	connect = 0;
// 	x = 0;
// 	y = 0;
// 	while (**(board_array)[y][0] != '\n')
// 	{
// 		if ((**(board_array)[y][x]) == '#')
// 		{
// 			if(++x < 4)
// 				if (**((board_array)[y][x]) == '#')
// 					connect++;
// 			if ((x -= 2) > 0)
// 				if ((**(board_array)[y][x]) == '#')
// 					connect++;
// 			y++;
// 			x++;
// 			if ((**(board_array)[y][x]) == '\0')
// 				if ((**(board_array)[y][x]) == '#')
// 					connect++;
// 			if ((y -= 2) > 0)
// 				if ((**(board_array)[y][x]) == '#')
// 					connect++;
// 		}
//         while ((**(board_array)[y][x]) == '.' && (**(board_array)[y][x]) != '\n')
//         {
//             if ((**(board_array)[y][x]) == '#' || (**(board_array)[y][0]) != '\n')
//                 break ;
//             else if ((**(board_array)[y][x]) != '\n' && (**(board_array)[y][0]) != '\n')
//                 x++;
//         }
// 	}
//     if (connect == 6 || connect == 8)
//         ft_putstr("storeit\n");
//     else
//         return (1);
//     return (0);
// }

int		verify_file(char *file_string)
{
	int		i;
	int		byte_counter;

	i = 4;
	byte_counter = 1;
	while(*file_string != '\0')
	{
		if (!(byte_counter % 21 == 0))
		{
			while(i-- > 0)
			{
				if(!(*file_string == '.' || *file_string == '#'))
				{
					ft_putstr("ERROR!.#");
					return (0);
				}
				file_string++;
				byte_counter++;
			}
			if(!(*file_string == '\n'))
			{
				ft_putstr("ERROR!\\n");
				return (0);
			}
			file_string++;
			byte_counter++;
			i = 4;
		}
		else
		{
			if(*file_string != '\n')
			{
				ft_putstr("ERROR\n");
				return (0);
			}
			file_string++;
			byte_counter++;
		}
	}
	return (1);
}



//int    board_error_check(char ***board_array)
//
//	int x;
//	int y;
//	int n;
//	int hash;
//
//	y = 0;
//	n = 4;
//	hash = 0;
//	x = 0;
//	while ((*(board_array)[y][x]) != '\0')
//{
//	x = 0;
//	while (x < 4 && hash < 4)
//	{
//		if ((*(board_array)[y][x]) == '#')
//			hash++;
//		if ((*(board_array)[y][x]) != '.')
//			return (1);
//		x++;
//	}
//	write(1, "check1\n", 7);
//	if ((x == 4) && ((*(board_array)[y][x]) != '\n'))
//		return (1);
//	write(1, "check2\n", 7);
//	y++;
//	if (y == n)
//	{
//		if ((*(board_array)[y][x]) != '\n')
//			return (1);
//		n += 5;
//	}
//	write(1, "check3\n", 7);
//	if ((*(board_array)[y][x]) == '\n')
//		y++;
//}
// if (check_hashes(&board_array))
// 	return (1);
// 	return (0);
// 	}
