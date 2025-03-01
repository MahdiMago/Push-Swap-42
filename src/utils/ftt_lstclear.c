/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftt_lstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:11 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/01 14:27:41 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ftt_lstclear(t_list *lst, void (*del)(void*))
{
	t_list	*tempo;

	if (lst == NULL || del == NULL)
		return ;
	while (lst)
	{
		tempo = (lst)-> next;
		free(lst);
		lst = tempo;
	}
	lst = NULL;
}
