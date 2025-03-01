/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:10:27 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/01 12:36:00 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <limits.h>

static int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	if (i == 1 && (str[0] == '-' || str[0] == '+'))
		return (0);
	return (1);
}

int	is_greater_than_max(const char *str)
{
	long	num;
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	num = ft_atoi(&str[i]);
	if (num > INT_MAX || num < INT_MIN)
		return (ft_printf("Error : number out of limits\n"), 1);
	return (0);
}

int check_characters(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (!is_valid_number(args[i])
			|| is_greater_than_max(args[i]) != 0)
			return (0);
		i++;
	}
	return (1);
}

int check_duplicates(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int check_input(int argc, char **argv)
{
	char	**args;

	if (argc < 2)
		return (0);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	if (!args)
		return (0);
	if (!check_characters(args) || check_duplicates(args))
	{
		if (argc == 2)
			free_split(args);
		return (0);
	}
	return (1);
}
