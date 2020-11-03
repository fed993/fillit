/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 19:37:17 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/14 19:57:57 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*out;
	int		i;

	out = (char *)malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (out)
	{
		i = 0;
		while (s[i])
		{
			out[i] = f(s[i]);
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}
