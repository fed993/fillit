/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2dchararr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 01:09:57 by fpolyans          #+#    #+#             */
/*   Updated: 2017/11/18 15:41:13 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print2dchararr(char **arr)
{
	int		i;

	i = 0;
	while(*arr)
	{
		while(*arr[i])
		{
			//write(1, arr[i], 1);
			i++;
		}
		write(1, "\n", 1);
		arr++;
	}
	write(1, "function executed", ft_strlen("function executed"));
}
