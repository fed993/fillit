/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 03:54:54 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 01:11:29 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t	size;

	size = ft_strlen(src);
	if (size < len)
	{
		ft_memset(dest, '\0', len);
		ft_memcpy(dest, src, size);
	}
	else
	{
		ft_memcpy(dest, src, len);
	}
	return (dest);
}
