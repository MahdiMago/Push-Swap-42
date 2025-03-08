/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:34 by mamagoma          #+#    #+#             */
/*   Updated: 2025/03/02 14:03:56 by mago             ###   ########.fr       */
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
# include <stdbool.h>
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_list	*target_node;
	struct s_list	*next;
}	t_list;

int		is_greater_than_max(const char *str);
int		check_characters(char **argv);
int		check_duplicates(char **args);
int		check_input(int argc, char **argv);
void	set_value(t_list **list_a, char **args);

void	ftt_lstadd_back(t_list **lst, t_list *new);
t_list	*ftt_lstnew(int value);
void	ftt_lstclear(t_list *lst, void (*del)(void*));

t_list	*find_big(t_list *list);
t_list	*find_last(t_list *list);
t_list	*find_min(t_list *list);
int		list_len(t_list *lst);

int		sort_list(t_list **a, t_list **b);
void	printf_list(t_list *list);

void	init_nodes_b(t_list *a, t_list *b);
void	set_target_b(t_list *a, t_list *b);
void	move_b_to_a(t_list **a, t_list **b);

void	init_node_a(t_list *a, t_list *b);
void	move_a_to_b(t_list **a, t_list **b);

void	current_index(t_list *list);
void	cheapest_value(t_list *lst);
void	prep_for_push(t_list **lst, t_list *top_node, bool ab);
t_list	*get_cheapest(t_list *lst);
bool	is_stack_sorted(t_list *list);
t_list	*find_min(t_list *list);

void	sort_three(t_list **list);
void	min_on_top(t_list **a);

void	free_split(char **str, bool is_alocated);
void	free_list(t_list **list, t_list **list_b);

void	swap(t_list **list);
void	rotate(t_list **list);
void	reverse_rotate(t_list **list);
void	push_list(t_list **top_1,  t_list **top_2);

void	rotate_both(t_list *cheapest_node, t_list **a, t_list **b);
void	rev_rotate_both(t_list *cheapest_node, t_list **a, t_list **b);
void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ra(t_list **list_a);
void	rb(t_list **list_b);
void	rra(t_list **list_a);
void	rrb(t_list **list_b);
void	ss(t_list **list_a, t_list **list_b);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);
void	rrr(t_list **list_a, t_list **list_b);

#endif
