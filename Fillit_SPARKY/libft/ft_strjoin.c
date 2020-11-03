/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 23:49:45 by fpolyans          #+#    #+#             */
/*   Updated: 2017/09/28 18:47:33 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*cat;

	i = 0;
	j = 0;
	cat = (char *)malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2))) + 1);
	if (cat == NULL)
		return (NULL);
	while ((size_t)i < ft_strlen(s1))
	{
		cat[i] = s1[i];
		i++;
	}
	while ((size_t)j < ft_strlen(s2))
	{
		cat[i] = s2[j];
		i++;
		j++;
	}
	cat[i] = '\0';
	return (cat);
}
