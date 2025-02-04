/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contain_only.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:19:11 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/04 14:30:18 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contain_only(char *str, char *autorised)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (autorised[j])
		{
			if (str[i] == autorised[j])
				break ;
			j++;
		}
		if (!autorised[j])
			return (1);
		i++;
	}
	return (0);
}
