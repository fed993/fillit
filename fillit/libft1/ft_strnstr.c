/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 15:05:07 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/20 15:55:58 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *in, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	if (!*in)
		return ((char*)src);
	while (*src && len--)
	{
		if (*src == *in)
		{
			i = len;
			s1 = (char*)src + 1;
			s2 = (char*)in + 1;
			while (i-- && (*s1) && (*s2) && (*s1 == *s2))
			{
				s1++;
				s2++;
			}
			if (!*s2)
				return ((char*)src);
		}
		src++;
	}
	return (NULL);
}
