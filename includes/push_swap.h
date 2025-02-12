/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:34 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/11 17:34:00 by mamagoma         ###   ########.fr       */
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
	struct list_a	*next;
};

struct s_list_b
{
	int				value;
	int				index;
	struct list_b	*next;
};

char	*split_arguments(char **argv);
int		check_caracters(char **argv);
int		check_double_2(char *s1, char *s2);
int		check_double(char **args);

#endif
