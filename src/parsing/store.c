/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:02:36 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/28 17:54:20 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*set_value(t_list *list_a, char **args)
{
	int		i;
	t_list	*new_node;

	i = 0;
	while (args[i])
	{
		new_node->value = ftt_lstnew(ft_atoi(args[i]));
		if (!new_node)
		{
			ft_lstclear(&list_a, free);
			return (list_a);
		}
		ft_lstadd_back(&list_a, new_node);
		i++;
	}
	set_index(list_a);
	return (list_a);
}
