#include "../../includes/push_swap.h"

void	min_on_top(t_list **a)
{
	while ((*a)->value != find_min(*a)->value)
	{
		if (find_min(*a)->above_median)
			ra(a);
		else
		rra(a);
	}
}

bool	is_stack_sorted(t_list *list)
{
	if (!list)
		return (1);
	while (list->next)
	{
		if (list->value > list->next->value)
			return (false);
		list = list->next;
	}
	return (true);
}

int	sort_list(t_list **a, t_list **b)
{
	int	len_a;

	len_a = list_len(*a);
	if (len_a-- > 3 && !is_stack_sorted(*a))
		pb(a, b);
	if (len_a-- > 3 && !is_stack_sorted(*a))
		pb(a, b);
	while (len_a-- > 3 && !is_stack_sorted(*a))
	{
		init_node_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
	return (0);
}
