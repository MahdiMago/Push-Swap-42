/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:51:19 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/02 14:03:10 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_split(char **str, bool is_alocated)
{
	int	i;

	i = 0;
	if (is_alocated)
	{
		while (str[i])
		{
			if (str[i])
				free(str[i]);
			i++;
		}
		if (str)
			free(str);
	}
}
