/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_determine_int_length.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 05:08:22 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:28:54 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_determine_int_length(int nb)
{
	int digt_cnt;

	digt_cnt = 1;
	nb = (nb < 0) ? -nb : nb;
	while (nb > 10)
	{
		nb = (nb / 10);
		digt_cnt++;
	}
	return (digt_cnt);
}
