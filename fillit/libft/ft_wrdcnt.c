/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 02:03:21 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 02:58:36 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wrdcnt(const char *s, char c)
{
	int		count;

	count = 0;
	while (s && *s)
	{
		if (*s != c)
		{
			++count;
			s = ft_strchr(s, c);
		}
		else
			s++;
	}
	return (count);
}
