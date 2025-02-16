/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:26:59 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/15 11:58:58 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

tt_list	*ft_lstmap(tt_list *lst, void *(*f)(void *), void (*del)(void *))
{
	tt_list	*new_lst;
	tt_list	*last;
	tt_list	*new_elem;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	last = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst -> content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		if (!new_lst)
			new_lst = new_elem;
		else
			last -> next = new_elem;
		last = new_elem;
		lst = lst -> next;
	}
	return (new_lst);
}
