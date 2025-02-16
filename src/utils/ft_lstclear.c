/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:11 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/16 16:57:00 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tempo;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		tempo = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = tempo;
	}
	*lst = NULL;
}
