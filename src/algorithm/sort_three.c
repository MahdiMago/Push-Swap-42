/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:47:32 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/08 07:50:52 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_list **list)
{
	t_list	*big_num;

	if ((*list)->value > (*list)->next->value
		&& (*list)->next->value > (*list)->next->next->value)
		return ;
	big_num = find_big(*list);
	printf_list(*list);
	if (big_num->next == NULL)
	{
		reverse_rotate(list);
	}
	else if (big_num == *list)
	{
		rotate(list);
	}
	else
	{
		swap(list);
		printf_list(*list);
		rotate(list);
	}
	printf_list(*list);
}
