/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stricut.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 03:12:18 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/01 13:47:49 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stricut(const char *src, int strt, int end)
{
	int		i;
	char	*out;

	i = 0;
	out = (char *)malloc((sizeof(char) * (end - strt)) + 2);
	if (!out)
		return (NULL);
	while (strt <= end)
	{
		out[i] = src[strt];
		i++;
	}
	return (out);
}
