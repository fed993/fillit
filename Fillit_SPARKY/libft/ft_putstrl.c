/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 05:09:40 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:21:55 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrl(char *str, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		ft_putchar(str[i]);
		i++;
	}
}
