/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:32:56 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:21:28 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (NULL);
	}
	while ((i < n) && (((char*)str2)[i] != c))
	{
		((char*)str1)[i] = ((char*)str2)[i];
		i++;
	}
	if ((i == n) && (((char*)str2)[i] != c))
	{
		return (NULL);
	}
	((char*)str1)[i] = ((char*)str2)[i];
	return (&((char *)str1)[i + 1]);
}
