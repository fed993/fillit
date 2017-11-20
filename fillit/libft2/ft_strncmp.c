/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 16:15:17 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:25:19 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1) && (*s2) && (*s1 == *s2) && (n > 0))
	{
		n--;
		s1++;
		s2++;
	}
	return (n ? ((int)((unsigned char)(*s1) - (unsigned char)(*s2))) : 0);
}
