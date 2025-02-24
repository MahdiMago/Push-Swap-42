/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:23:30 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/24 13:26:29 by mago             ###   ########.fr       */
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


// int	main(void)
// {
// 	t_list *list = malloc(sizeof(t_list));
// 	t_list *list2 = malloc(sizeof(t_list));
// 	t_list *list3 = malloc(sizeof(t_list));

// 	list->next = list2;
// 	list2->next = list3;
// 	list->value = 1;
// 	list2->value = 5;
// 	list3->value = 2;

// 	sort_three(&list);
// 	return (0);
// }