/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 03:09:57 by fpolyans          #+#    #+#             */
/*   Updated: 2017/12/06 09:10:59 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*parse_file(int fd)
{
	char	char_buffer[2];
	char	*full_tet_string;

	char_buffer[1] = '\0';
	full_tet_string = (char*)malloc(TET_SIZE * MAX_TETS);
	while (read(fd, &char_buffer[0], 1))
	{
		ft_strcat(full_tet_string, &char_buffer[0]);
	}
	return (full_tet_string);
	free(full_tet_string);
}
