/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:55:49 by mamagoma          #+#    #+#             */
/*   Updated: 2025/05/14 15:24:56 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
* true = list_a
* false = list_b
*/
void	prep_for_push(t_list **lst, t_list *top_node, bool ab)
{
	if (*lst == top_node)
		return ;
	while (*lst != top_node)
	{
		if (ab == true)
		{
			if (top_node->above_median)
				ra(lst);
			else
				rra(lst);
		}
		else if (ab == false)
		{
			if (top_node->above_median)
				rb(lst);
			else
			{
				rrb(lst);
			}
		}
	}
}

void	move_a_to_b(t_list **a, t_list **b)
{
	t_list *cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
		rotate_both(cheapest_node, a, b);
	else if (!(cheapest_node->above_median
		&& cheapest_node->target_node->above_median))
		rev_rotate_both(cheapest_node, a, b);
	prep_for_push(a, cheapest_node, true);
	prep_for_push(b, cheapest_node->target_node, false);
	pb(a, b);
}

t_list	*get_cheapest(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst)
	{
		if (lst->cheapest == true)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (NULL);
}
