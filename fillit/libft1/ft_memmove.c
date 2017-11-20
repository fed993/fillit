/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 03:00:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/20 21:22:40 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*out;

	out = dst;
	if (dst < src)
	{
		while ((size_t)((char*)dst - out) < len)
		{
			*(unsigned char*)dst++ = *(unsigned char*)src++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
		}
	}
	return (out);
}
