/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:56:03 by fpolyans          #+#    #+#             */
/*   Updated: 2017/09/28 18:46:52 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		num;
//	size_t	negflag;
	char	*temp;

	num = 0;
	temp = ft_skipblanks(str);
	if (*temp == '-')
	{
//		negflag = 1;
		temp++;
	}
	while ((*temp >= '0') && (*temp <= '9'))
	{
		num = num * 10 + (*temp - '0');
		temp++;
	}
	if (ft_strcontains(str, '-'))
		num = num * -1;
	return (num);
}
