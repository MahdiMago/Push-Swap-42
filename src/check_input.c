/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:10:27 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/11 17:33:00 by mamagoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*split_arguments(char **argv)
{
	char	**args;

	args = ft_split(argv[1], ' ');
	if (!args)
		return (NULL);
	return (args);
}

int	check_caracters(char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if (argv[j][i] >= '0' && argv[j][i] <= '9')
				i++;
			else if ((argv[j][i + 1] >= '0' && argv[j][i + 1] <= '9') &&
			argv[j][i] == '-' || argv[j][i] == '+')
				i++;
			else
				return (1);
		}
		j++;
	}
	return (0);
}

int	check_double_2(char *s1, char *s2)
{
	int	i;
	int	n;

	if (ft_strlen(s1) != ft_strlen(s2))
		return (1);
	i = 0;
	n = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			n++;
		i++;
	}
	if (n == ft_strlen(s1))
		return (0);
	return (1);
}

int	check_double(char **args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (args[j])
	{
		if (check_double_2(args[j], args[i]) == 0)
		{
			ft_printf("il y a des doublons");
			return (1);
		}
		if (args[j + 1] == NULL)
		{
			i++;
			j = 0;
		}
		j++;
	}
	ft_printf("pas de doublons");
	return (0);
}
