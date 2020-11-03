/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 05:57:40 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:10:57 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int		temp_nb;
	int		array_index;
	char	array[ft_determine_int_length(nb)];

	temp_nb = nb;
	if (temp_nb == -2147483648)
		ft_putstrl("-2147483648", 11);
	else
	{
		array_index = ft_determine_int_length(temp_nb) - 1;
		temp_nb = (nb < 0) ? (0 - temp_nb) : temp_nb;
		while (temp_nb > 0)
		{
			array[array_index] = ((temp_nb % 10) + '0');
			array_index--;
			temp_nb = temp_nb / 10;
		}
		if (nb < 0)
			ft_putchar('-');
		ft_putstrl(array, ft_determine_int_length(nb));
	}
}
