/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:34 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/05 11:49:39 by mamagoma         ###   ########.fr       */
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
	struct list_a	*prev;
	struct list_a	*next;
};

struct s_list_b
{
	int				value;
	int				index;
	struct list_b	*prev;
	struct list_b	*next;
};

#endif
