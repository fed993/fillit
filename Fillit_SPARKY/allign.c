/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 23:21:47 by fpolyans          #+#    #+#             */
/*   Updated: 2017/12/12 08:32:46 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	allign_file(char ***board_arr, int tet_count)
{
	int     i;

	i = tet_count;
	while (i-- > 0)
	{
		allign_tet((*board_arr)[i]);
	}
	return (TRUE);
}

void	allign_tet(char *tet)
{
	
}
