/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 20:14:00 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:26:59 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*strt;
	char	*end;

	strt = (char*)s;
	end = ft_strchr(s, 0) - 1;
	while (ft_cantrim(*strt))
	{
		strt++;
	}
	while (ft_cantrim(*end) && (end > strt))
	{
		end--;
	}
	return (ft_strsub(strt, 0, 1 + end - strt));
}
