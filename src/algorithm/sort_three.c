/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:17:44 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/08 13:41:26 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_list **list)
{
	t_list	*big_value;

	big_value = find_big(*list);
	if (big_value == *list)
	{
		ra(list);
	}
	else if (big_value == (*list)->next)
	{
		rra(list);
	}
	if ((*list)->value > (*list)->next->value)
		sa(list);
}
