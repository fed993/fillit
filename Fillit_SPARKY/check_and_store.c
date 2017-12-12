/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_store.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 04:31:51 by fpolyans          #+#    #+#             */
/*   Updated: 2017/12/11 15:28:55 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	set_ints(int (*ints)[3])
{
	(*ints)[0] = 4;
	(*ints)[1] = 1;
	(*ints)[2] = 1;
}

void	iterate_upward(char **str, int (*ints)[3])
{
	(*str)++;
	((*ints)[1])++;
}

int		verify_file(char *str)
{
	int		ints[3];

	set_ints(&ints);
	while (*str != '\0')
	{
		if (ints[1] % 21 == 0)
		{
			ints[2] = (*str != '\n') ? 0 : ints[2];
			iterate_upward(&str, &ints);
		}
		else
		{
			while (ints[0]-- > 0)
			{
				ints[2] = (!(*str == '.' || *str == '#')) ? 0 : ints[2];
				iterate_upward(&str, &ints);
			}
			ints[2] = (!(*str == '\n')) ? 0 : ints[2];
			ints[0] = 4;
			iterate_upward(&str, &ints);
		}
	}
	return (ints[2]);
}
