/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 03:15:46 by fpolyans          #+#    #+#             */
/*   Updated: 2017/11/19 15:58:57 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main()
{
	int fdin;
	char	*file_string;

	fdin = 0;
//	if (ac != 2)
//	{
//		write(1, "usage", 5);
//	}
//	else
//	{
//		fdin = open(av[ac - 1], O_RDWR);
		fdin = open("sample.fillit", O_RDWR);
		file_string = parse_file(fdin);
		write(1, file_string, ft_strlen(file_string));
		print2dchararr(read_tets(file_string));
		return (1);
//	}
}
