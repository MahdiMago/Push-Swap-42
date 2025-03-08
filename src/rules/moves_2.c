/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:35:01 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/08 07:40:34 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	rotate(list_a);
	ft_printf("ra\n");
}

void	rb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	rotate(list_b);
	ft_printf("rb\n");
}

void	rr(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;
	rotate(list_a);
	rotate(list_b);
	ft_printf("rr\n");
}

void	rra(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	reverse_rotate(list_a);
	ft_printf("rra\n");
}

void	rrb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	reverse_rotate(list_b);
	ft_printf("rrb\n");
}
