/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:23:30 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/16 16:50:36 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static char	**make_args(int argc, char **argv);

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	**args;

	list_a = malloc(sizeof(t_list));
	list_b = malloc(sizeof(t_list));
	args = make_args(argc, argv);

	if (!(check_input(argc, argv) == 1))
	{
		ft_printf("Error\n");
		return (1);
	}
	list_init(list_a, list_b);
	// set_up(list_a, args);
	return (0);
}

static char	**make_args(int argc, char **argv)
{
	char **args;

	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else if (argc > 2)
		args = argv + 1;
	else
		return (NULL);
	return (args);
}
