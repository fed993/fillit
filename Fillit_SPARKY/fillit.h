#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include "libft/libft.h"

# define TET_HEIGHT 5
# define TET_WIDTH 5
# define TET_SIZE 21
# define MAX_TETS 26

char	*read4(int fd, char *buf);
char	*read1(int fd, char *buf);
char	*parse_file(int fd);
int		verify_file(char *file_string);
int		get_fd(int argc, char **argv);
void	create_board_array(char ***board_array, char **file_string);
int		board_error_check(char ***board_array);
void	print_board(char ***board_array);
int		check_hashes(char **file_string);
int		count_tets(char *file_string);
void	delimit(char *str, char c);

#endif
