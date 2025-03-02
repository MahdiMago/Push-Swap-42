/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:23:30 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/02 12:17:02 by mamagoma         ###   ########.fr       */
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
	list_a = NULL;
	list_b = NULL;
	if (!(check_input(argc, argv) == 1))
	{
		ft_printf("Error\n");
		return (1);
	}
	args = make_args(argc, argv);
	set_value(&list_a, args);
	if (!is_stack_sorted(list_a))
	{
		if (list_len(list_a) == 2)
			sa(&list_a);
		else if (list_len(list_a) == 3)
			sort_three(&list_a);
		else
			sort_list(&list_a, &list_b);
	}
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
