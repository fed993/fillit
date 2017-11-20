/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 01:59:15 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 05:20:55 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int		word;
	int		word_count;
	char	**out;
	char	*next;

	word_count = ft_wrdcnt(s, c);
	out = (char**)ft_memgive(sizeof(char*) * (word_count + 1));
	if (!out)
		return (NULL);
	word = 0;
	while (word < word_count)
	{
		while (*s == c)
			s++;
		next = ft_strchr(s, c);
		if (next)
			out[word] = ft_strsub(s, 0, next - s);
		else
			out[word] = ft_strdup(s);
		s = next;
		word++;
	}
	return (out);
}
