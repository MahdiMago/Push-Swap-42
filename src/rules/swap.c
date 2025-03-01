/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:47:02 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/01 15:04:33 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_list **list)
{
	t_list *second;

	if (!list || !(*list))
		return ;
	second = (*list)->next;
	(*list)->next = second->next;
	second->next = *list;
	*list = second;
	return ;
}

/*
* Décale tous les éléments de la pile de 1
* Le premier élément devient le dernier
*/
void	rotate(t_list **list)
{
	t_list *last;

	if (!list || !(*list)->next || !(*list))
		return ;
	last = *list;
	while (last->next)
		last = last->next;
	last->next = *list;
	*list = (*list)->next;
	last->next->next = NULL;
	return ;
}

void	reverse_rotate(t_list **list)
{
	t_list	*last;
	t_list	*new_head;

	if (!*list || !(*list)->next)
		return ;
	last = *list;
	while (last->next->next)
		last = last->next;
	last->next->next = *list;
	new_head = last->next;
	last->next = NULL;
	return ;
}

/*
* the first param will be pushed in the top of the second
*/
void	push_list(t_list **top_1,  t_list **top_2)
{
	t_list	*new_head;

	if (!*top_1 || !top_1 || !top_2)
		return ;
	new_head = *top_1;
	*top_1 = (*top_1)->next;
	new_head->next = *top_2;
	*top_2 = new_head;
	return ;
}
