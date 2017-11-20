/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 20:56:08 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 01:58:23 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	char	*end;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size < size)
	{
		end = dst + dst_size;
		ft_bzero(end, size - dst_size);
		ft_memcpy(end, src, size - dst_size - 1);
		return (dst_size + src_size);
	}
	return (size + src_size);
}
