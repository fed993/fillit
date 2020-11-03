/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delimit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:01:46 by fpolyans          #+#    #+#             */
/*   Updated: 2017/12/13 16:32:59 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		delimit(char *file_string, char c)
{   
	int     i;
//	int     count;
	int		delimits;

	i = 0;
//	count = 0;
	delimits = 0;
	while (file_string[i] != '\0') 
	{   
		if (file_string[i] == '\n' && file_string[i + 1] == '\n')
		{
			file_string[i + 1] = c;
			delimits++;
		}
		i++;
	}
	return (delimits);
}

int		delimit_tet(char *tet_string, char c)
{   
	int     i;
//	int     count;
	int		delimits;

	i = 0;
//	count = 0;
	delimits = 0;
	while (tet_string[i] != '\0') 
	{   
		if (tet_string[i] == '\n')
		{
			tet_string[i] = c;
			delimits++;
		}
		i++;
	}
	return (delimits);
}
