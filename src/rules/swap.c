/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:47:02 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/18 22:51:12 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*swap(t_list *list)
{
	t_list *second;

	if (!list)
		return (list);
	second = list->next;
	list->next = second->next;
	second->next = list;
	return (list);
}

t_list	*rotate(t_list *list)
{
	t_list *last;
	t_list *first;

	if (!list || !list->next)
		return (list);
	last = list;
	first = list;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	return (list);
}

t_list	*reverse_rotate(t_list *list)
{
	t_list	*last;
	t_list	*new_head;

	if (!list || !list->next)
		return (list);
	last = list;
	while (last->next->next)
		last = last->next;
	last->next->next = first;
	new_head = last->next;
	last->next = NULL;
	return (new_head);
}

t_list	*push_list(t_list *list_a,  t_list *list_b)
{
	t_list	*new_head;

	if (!list_a)
		return (list_b);
	new_head = list_a;
	list_a = list_a->next;
	new_head->next = list_b;
	list_b = new_head;
	return (list_b);
}
