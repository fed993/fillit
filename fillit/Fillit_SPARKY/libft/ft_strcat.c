/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 17:30:15 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:27:20 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = dest;
	while (*dest)
	{
		dest++;
	}
	ft_strcpy(dest, src);
	return (newstr);
}
