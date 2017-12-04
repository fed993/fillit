/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 23:51:56 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 00:18:55 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	while (1)
	{
		if (*str == c)
		{
			return ((char*)str);
		}
		if (*str++ == '\0')
		{
			return (NULL);
		}
	}
	return (NULL);
}
