/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 18:56:51 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 08:02:44 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int		temp_n;
	int		len;
	int		negative_flag;
	char	*out;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	temp_n = n;
	len = 2;
	negative_flag = 0;
	ft_itoa_neg_helper(&n, &negative_flag);
	while (temp_n /= 10)
		len++;
	len += negative_flag;
	if ((out = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	out[--len] = '\0';
	while (len--)
	{
		out[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative_flag)
		out[0] = '-';
	return (out);
}
