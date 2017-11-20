/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 03:09:57 by fpolyans          #+#    #+#             */
/*   Updated: 2017/11/19 15:13:30 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*parse_file(int fd)
{
	char	char_buffer[1];
	char	*full_tet_string;

	full_tet_string = (char*)malloc(TET_SIZE * MAX_TETS);
	while (read(fd, char_buffer, 1))
	{
		ft_strcat(full_tet_string, char_buffer);
	}
	return (full_tet_string);
}
