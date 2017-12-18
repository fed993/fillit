/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_hashes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:02:24 by fpolyans          #+#    #+#             */
/*   Updated: 2017/12/11 23:52:09 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_hashes_file(char ***board_arr, int tet_count)
{
	int		i;

	i = tet_count;
	while (i-- > 0)
	{
		if (!(check_hashes_tet((*board_arr)[i])))
			return (FALSE);
	}
	return (TRUE);
}

int     check_hashes_tet(char *file_string)
{   
	int     i;
	int     conn;

	i = 0;
	conn = 0;
	while ((file_string)[i] != '\0')
	{   
		if ((file_string)[i] == '#')
		{
			if ((i + 1 >= 0) && (i + 1 <= (TET_SIZE)))
				conn += ((file_string)[i + 1] == '#') ? 1 : 0;
			if ((i - 1 >= 0) && (i - 1 <= (TET_SIZE)))
				conn += ((file_string)[i - 1] == '#') ? 1 : 0;
			if ((i + TET_WIDTH >= 0) && (i + 1 <= (TET_SIZE)))
				conn += (((file_string)[i + TET_WIDTH] == '#') ? 1 : 0);
			if ((i - TET_WIDTH >= 0) && (i - 1 <= (TET_SIZE)))
				conn += (((file_string)[i - TET_WIDTH] == '#') ? 1 : 0);
			if (conn == 0)
				return (FALSE);
			i++;
		}
		else
			i++;
	}
	return ((conn == 8 || conn == 6) ? TRUE : FALSE);
}
