#include "libft/libft.h"
#include "fillit.h"

int main(int argc, char **argv)
{
	char	**board_array;
	char	*file_string;
	int		i;
	int		tet_count;

	board_array = (char**)malloc(sizeof(char*) * (MAX_TETS * TET_HEIGHT));
	file_string = (char*)malloc(sizeof(char) * TET_SIZE * MAX_TETS);
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
	file_string = parse_file(get_fd(argc, argv));
	if(verify_file(file_string))
		ft_putstr("format correct\n");
	else
		ft_putstr("format good\n");
	tet_count = (delimit(file_string, ',')) + 1;
	board_array = ft_strsplit(file_string, ',');
	if (check_hashes_file(&board_array, tet_count))
		ft_putstr("hashes good!\n");
	else
		ft_putstr("hashes bad :( \n");
	return (0);
}
