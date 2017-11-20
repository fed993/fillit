/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:56:03 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 20:38:39 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int	negflag;
	int	num;

	negflag = 0;
	num = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
			|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == 45)
		negflag = 1;
	if ((*str == 45) || (*str == 43))
		str++;
	while ((*str >= 48) && (*str <= 57))
	{
		num *= 10;
		num += ((int)*str - 48);
		str++;
	}
	if (negflag)
		return (-num);
	else
		return (num);
}
