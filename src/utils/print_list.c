/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:05:08 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/01 14:05:09 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	printf_list(t_list *list)
{
	while (list)
	{
		printf("%d\n", list->value);
		list = list->next;
	}
	printf("--------------\n");
}
