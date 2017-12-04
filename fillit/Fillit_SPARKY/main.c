#include "libft/libft.h"
#include "fillit.h"

int main(int argc, char **argv)
{
	char **board_array;
	int i;

	board_array = (char**)malloc(sizeof(char*) * (MAX_TETS * TET_HEIGHT));
	i = 0;
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	while (i < (MAX_TETS * TET_HEIGHT))
	{
		board_array[i] = (char *)malloc(sizeof(char) * TET_WIDTH);
		i++;
	}
//	ft_putstr(parse_file(get_fd(argc, argv)));
	if(verify_file(parse_file(get_fd(argc, argv))))
		ft_putstr("lmao");;
//	create_board_array(get_fd(argc, argv), &board_array);
//	if (board_error_check(&board_array) == 0)
//		print_board(&board_array);
//	else
//		ft_putstr("ERROR!");
	return (0);
}
