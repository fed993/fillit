/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 20:22:15 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 20:34:41 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *nlist;

	nlist = NULL;
	if (!lst || !f)
		return (nlist);
	nlist = f(lst);
	new = nlist;
	lst = lst->next;
	while (lst)
	{
		new->next = (*f)(lst);
		new = new->next;
		lst = lst->next;
	}
	return (nlist);
}
