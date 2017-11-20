/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:59:46 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/20 02:04:50 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;

	i = 0;
	mem = malloc(size);
	if (!mem)
	{
		return (NULL);
	}
	while (i < size)
	{
		((char*)mem)[i] = 0;
		i++;
	}
	((char*)mem)[i] = '\0';
	return (mem);
}
