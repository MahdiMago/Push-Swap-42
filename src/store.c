/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:02:36 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/16 16:53:55 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list *set_up(char **args)
{
    t_list *list_a = NULL; // Liste vide au départ
    t_list *new_node;
    int i = 0;

    while (args[i])
    {
        new_node = ft_lstnew(ft_atoi(args[i]));
        if (!new_node)
        {
            ft_lstclear(&list_a, free);
            return NULL;
        }

        ft_lstadd_back(&list_a, new_node);
        i++;
	}
    return (list_a);
}

t_list	set_up(t_list *list_a, char **args)
{
	int		i;
	t_list	new_node;

	i = 0;
	while (args[i])
	{
		*new_node->value = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(&list_a, list_a);
		if (!new_node)
		{
			ft_lstclear()
		}
		i++;
	}
	return (&list_a);
}
