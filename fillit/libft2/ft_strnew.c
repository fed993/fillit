/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 19:27:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:24:17 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc((sizeof(char) * (int)size) + 1);
	if (!str)
		return (NULL);
	while (i < (int)(size + 1))
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
