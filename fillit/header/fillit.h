/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 03:13:16 by fpolyans          #+#    #+#             */
/*   Updated: 2017/11/10 03:14:54 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#define TET_HEIGHT 4
#define TET_WIDTH 4

#include <unistd.h>
#include <stdlib.h>

int	ft_wrdcnt(const char *s, char c);
void	*ft_memgive(size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
char	**ft_strsplit(const char *s, char c);

#endif
