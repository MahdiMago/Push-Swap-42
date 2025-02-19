/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagoma <mamagoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:34 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/18 20:35:04 by mamagoma         ###   ########.fr       */
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

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

int		is_greater_than_max(const char *str);
int		check_characters(char **argv);
int		check_duplicates(char **args);
int		check_input(int argc, char **argv);
void	free_split(char **str);
void	ft_lstadd_back(t_list **lst, t_list *new);

t_list	set_value(t_list *list_a, char **args);
t_list	*ft_lstnew(int *value);
void	ft_lstclear(t_list **lst, void (*del)(void*))

#endif
