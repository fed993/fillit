/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 17:45:30 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/20 18:01:52 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;

	out = (char*)malloc((sizeof(char) * ft_strlen(s1)));
	if (out)
	{
		ft_strcpy(out, s1);
	}
	return (out);
}
