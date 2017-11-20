/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_magnitude.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 04:19:37 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:26:28 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_magnitude(size_t low, long n)
{
	int		mag;

	mag = 0;
	if (n < 0)
		mag++;
	while (n)
	{
		mag++;
		n /= (long)low;
	}
	if (!mag)
		return (1);
	return (mag);
}
