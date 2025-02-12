/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:23:30 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/12 22:32:36 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	if (check_input(argc, argv) == 1)
		ft_printf("marche bien\n");
	else
	ft_printf("marche pas\n");
	return (0);
}
