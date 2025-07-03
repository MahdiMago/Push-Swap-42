/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftt_lstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:20:20 by mamagoma          #+#    #+#             */
/*   Updated: 2025/05/14 15:23:09 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list *ftt_lstnew(int value)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);

	new_node->value = value;
	new_node->index = -1;
	new_node->push_cost = 0;
	new_node->above_median = false;
	new_node->cheapest = false;
	new_node->target_node = NULL;
	new_node->next = NULL;

	return (new_node);
}
