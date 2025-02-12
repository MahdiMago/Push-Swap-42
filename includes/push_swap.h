/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:34 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/12 22:34:04 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "Libft/libft.h"
# include "ft_printf/ft_printf.h"

struct s_list_a
{
    int				value;
    int				index;
    struct s_list_a	*next;
} t_list_a;

struct s_list_b
{
    int				value;
    int				index;
    struct s_list_b	*next;
} t_list_b;

int	is_greater_than_max(const char *str);
int	check_characters(char **argv);
int	check_duplicates(char **args);
int	check_input(int argc, char **argv);
void	free_split(char **str);

#endif

