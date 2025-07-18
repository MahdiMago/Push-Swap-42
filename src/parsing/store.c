/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:02:36 by mamagoma          #+#    #+#             */
/*   Updated: 2025/07/04 01:10:16 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	set_index(t_list **list_a)
{
	t_list	*current;
	t_list	*other;
	int		index;

	current = *list_a;
	while (current)
	{
		index = 0;
		other = *list_a;
		while (other)
		{
			if (other->value < current->value)
				index++;
			other = other->next;
		}
		current->index = index;
		current = current->next;
	}
}

void	set_value(t_list **list_a, char **args)
{
	int		i;
	t_list	*new_node;

	i = 0;
	while (args[i])
	{
		new_node = ftt_lstnew((int)ft_atoi(args[i]));
		if (!new_node)
		{
			ftt_lstclear(*list_a, free);
			return ;
		}
		ftt_lstadd_back(list_a, new_node);
		i++;
	}
	set_index(list_a);
}
