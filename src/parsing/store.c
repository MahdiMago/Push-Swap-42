/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:02:36 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/01 15:39:04 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
}
