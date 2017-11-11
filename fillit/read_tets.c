/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_tets.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 03:09:57 by fpolyans          #+#    #+#             */
/*   Updated: 2017/11/10 08:17:58 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	parse_tets(int fd)
{
	int 	buf_loc;
	char	*char_buffer;
	char	*full_tet_string;
	char	**output;

	buf_loc = 0;
	char_buffer = (char*)malloc(3);
	full_tet_string = (char*)malloc(21);
	full_tet_string[20] = '\0';
	while ((buf_loc = read(fd, char_buffer, 1)) <= 0)
	{
		char_buffer[buf_loc] = '\0';
		ft_strcat(char_buffer, full_tet_string)
	}
	return (ft_strsplit(full_tet_string, '\n'));
}
