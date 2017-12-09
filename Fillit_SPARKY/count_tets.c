#include "fillit.h"

int		count_tets(char *file_string)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (file_string[i] != '\0')
	{
		if (file_string[i] == '#')
		{
			count++;
			while (!(file_string[i] == '\n' && file_string[i+1] == '\n'))
				i++;
		}
		else
			i++;
	}
	return (count);
}
