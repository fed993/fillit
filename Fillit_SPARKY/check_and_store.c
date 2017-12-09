/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_store.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 04:31:51 by fpolyans          #+#    #+#             */
/*   Updated: 2017/12/09 11:50:18 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		iterate_downward(int *i)
{
	(*i)--;
	return (1);
}

int		verify_file(char *file_string)
{
	int		i;
	int		size;

	i = 5;
	size = 1;
	while (*file_string != '\0')
	{
		if ((i == 5) ? iterate_downward(&size) : (!(size % 21 == 0)))
		{
			i = ((i == 5) ? 4 : i);
			while (i-- > 0)
			{
				if (!(*file_string == '.' || file_string[size] == '#'))
				{
					ft_putstr("ERROR.#");
					return (0);
				}
				file_string++;
			}
			if (!(*file_string == '\n'))
			{
				ft_putstr("ERROR.#");
				return (0);
			}
			i = 4;
			file_string++;
		}
		else
		{

			if (file_string[size++] != '\n')
			{
				ft_putstr("ERROR.#");
				return (0);
			}
			file_string++;
		}
	}
	return (1);
}
