/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:11 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/23 20:36:04 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ftt_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tempo;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		tempo = (*lst)-> next;
		free(*lst);
		*lst = tempo;
	}
	*lst = NULL;
}
