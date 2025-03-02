/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:23:30 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/02 14:06:14 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static char	**make_args(int argc, char **argv, bool *is_alocated);

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	**args;
	bool	is_alocated;

	list_a = NULL;
	list_b = NULL;
	if (!(check_input(argc, argv) == 1))
	{
		ft_printf("Error\n");
		return (1);
	}
	args = make_args(argc, argv, &is_alocated);
	set_value(&list_a, args);
	free_split(args, is_alocated);
	if (!is_stack_sorted(list_a))
	{
		if (list_len(list_a) == 2)
			sa(&list_a);
		else if (list_len(list_a) == 3)
			sort_three(&list_a);
		else
			sort_list(&list_a, &list_b);
	}
	free_list(&list_a, &list_b);
	return (0);
}

static char	**make_args(int argc, char **argv, bool *is_alocated)
{
	char **args;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		*is_alocated = true;
	}
	else if (argc > 2)
	{
		args = argv + 1;
		*is_alocated = false;
	}
	else
		return (NULL);
	return (args);
}
