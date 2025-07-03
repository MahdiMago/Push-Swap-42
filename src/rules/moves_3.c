/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:35:01 by mamagoma          #+#    #+#             */
/*   Updated: 2025/05/14 14:29:54 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrr(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	ft_printf("rrr\n");
}

void	rotate_both(t_list *cheapest_node, t_list **a, t_list **b)
{
	while (*a != cheapest_node && *b != cheapest_node->target_node)
		rr(a, b);
	while (*a != cheapest_node)
		ra(a);
	while (*b != cheapest_node->target_node)
		rb(b);
	current_index(*a);
	current_index(*b);
}

void	rev_rotate_both(t_list *cheapest_node, t_list **a, t_list **b)
{
	while (*a != cheapest_node && *b != cheapest_node->target_node)
		rrr(a, b);
	while (*a != cheapest_node)
		rra(a);
	while (*b != cheapest_node->target_node)
		rrb(b);
	current_index(*a);
	current_index(*b);
}
