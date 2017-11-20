/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 05:57:40 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 20:03:49 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int mnb;

	if (nb < 0)
	{
		ft_putchar('-');
		mnb = -nb;
	}
	else
		mnb = nb;
	if (mnb >= 10)
	{
		ft_putnbr(mnb / 10);
		ft_putnbr(mnb % 10);
	}
	else if (mnb < 10)
	{
		ft_putchar(mnb + '0');
	}
}
