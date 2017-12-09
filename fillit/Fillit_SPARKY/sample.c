#include "fillit.h"

void	delimit(char *file_string, char c)
{
	int     i;
	int     count;

	i = 0;
	count = 0;
	while (file_string[i] != '\0')
	{
		if (file_string[i] == '\n' && file_string[i+1] == '\n')
		{
			file_string[i + 1] = c;
		}
		i++;
	}
}

int   check_hashes(char **file_string)
{
	int     i;
	int     conn;

	i = 0;
	conn = 0;
	while((*file_string)[i] != '\0')
	{
		if ((*file_string)[i] == '#')
		{
			if ((i + 1 >= 0) && (i + 1 <= (TET_SIZE)))
			{
				if ((*file_string)[i + 1] == '#')
				{
					conn++;
				}
			}
			if ((i - 1 >= 0) && (i - 1 <= (TET_SIZE)))
			{
				if ((*file_string)[i - 1] == '#')
				{
					conn++;
				}
			}
			if ((i + TET_WIDTH >= 0) && (i + 1 <= (TET_SIZE)))
			{
				if ((*file_string)[i + TET_WIDTH] == '#')
				{
					conn++;
				}
			}
			if ((i - TET_WIDTH >= 0) && (i - 1 <= (TET_SIZE)))
			{
				if ((*file_string)[i - TET_WIDTH] == '#')
				{
					conn++;
				}
			}
			i++;
		}
		else
		{
			i++;
		}
	}
	if (conn == 8 || conn == 6)
		return (1);
	else
		return (0);
}
