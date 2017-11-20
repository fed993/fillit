/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 05:10:23 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:20:00 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrl_fd(char *str, int length, int fd)
{
	int i;

	i = 0;
	while (i < length)
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
