/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 02:14:27 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/20 02:35:59 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *in)
{
	char	*s1;
	char	*s2;

	if (!*in)
		return ((char*)src);
	while (*src)
	{
		if (*src == *in)
		{
			s1 = (char*)src;
			s2 = (char*)in;
			while ((*s1) && (*s2) && (*s1 == *s2))
			{
				s1++;
				s2++;
			}
			if (!*s2)
			{
				return ((char*)src);
			}
		}
		src++;
	}
	return (NULL);
}
