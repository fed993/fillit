/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 03:15:46 by fpolyans          #+#    #+#             */
/*   Updated: 2017/11/10 06:36:01 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int fdin;

	fdin = 0;
	if (ac != 2)
	{
		write(1, "usage", 5);
	}
	else
	{
		fdin = open(av[ac - 1], O_RDWR);
		parse_tets(fdin);
	}
}
