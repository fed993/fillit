/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 07:13:48 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 08:08:43 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *alst, t_list *(*f)(t_list *))
{
	t_list	*begin;
	t_list	*prev;
	t_list	*new;

	begin = NULL;
	if (alst != NULL)
	{
		begin = ft_lstnew((void*)(alst->content), (alst->content_size));
		if (begin == NULL)
			return (NULL);
		begin = f(begin);
		prev = begin;
		alst = alst->next;
	}
	while (alst != NULL)
	{
		new = ft_lstnew(alst->content, (alst->content_size));
		if (new == NULL)
			return (NULL);
		new = f(new);
		prev->next = new;
		alst = alst->next;
	}
	return (begin);
}
