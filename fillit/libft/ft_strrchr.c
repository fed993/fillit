/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 00:20:00 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 00:57:54 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*end;

	end = (char*)str + ft_strlen(str);
	c = (char)c;
	while (end >= str)
	{
		if (*end == c)
		{
			return (end);
		}
		end--;
	}
	return (NULL);
}
