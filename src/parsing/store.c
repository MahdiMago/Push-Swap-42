/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:02:36 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/25 22:55:01 by mago             ###   ########.fr       */
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
		new_node->value = ft_lstnew(ft_atoi(args[i]));
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

int	count_elem(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	set_index(t_list **a)
{
	t_list	*current;
	int	*values;
	int count;
	int	i;
	int	j;
	
	current = *a;
	count = count_elem(*a);
	values = malloc(sizeof(int) * count);
	if (!values)
		return ;
	i = 0;
	while (current)
	{
		values[i++] = current->value;
		current = current->next;
	}
	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (values[i] > values[j])
				ft_swap(&values[i], &values[j]);
			j++;
		}
		i++;
	}
	current = *a;
	while (current)
	{
		i = 0;
		while (i < count)
		{
			if (current->value == values[i])
				{
					current->index = i;
					break;
				}
			i++;
		}
		current = current->next;
	}
	free(values);
}
