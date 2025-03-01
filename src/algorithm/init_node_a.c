
#include "../../includes/push_swap.h"

void	current_index(t_list *list)
{
	int	i;
	int	median;
	
	i = 0;
	if (!list)
	return ;
	median = list_len(list) / 2;
	while (list)
	{
		list->index = i;
		if (i <= median)
		list->above_median = true;
		else
		list->above_median = false;
		list = list->next;
		i++;
	}
}

static void	set_target_a(t_list *a, t_list *b)
{
	t_list	*current_b;
	t_list	*target_node;
	long	best_index;

	while (a)
	{
		best_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->value > a->value
				&& current_b > best_index)
			{
				best_index = current_b->value;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_index == LONG_MIN)
			a->target_node = find_big(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

static void	cost_analysis_a(t_list *a, t_list *b)
{
	int	len_a;
	int	len_b;

	len_a = list_len(a);
	len_b = list_len(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = len_a - (a->index);
		if (a->target_node->above_median)
			a->push_cost += a->target_node->index;
		else
			a->push_cost += len_b - (a->target_node->index);
		a = a->next;
	}
}

void	cheapest_value(t_list *lst)
{
	t_list *cheapest_node;
	long	cheapest_value;

	if (!lst)
		return ;
	cheapest_value = LONG_MIN;
	while (lst)
	{
		if (lst->push_cost > cheapest_value)
		{
			cheapest_value = lst->push_cost;
			cheapest_node = lst;
		}
		lst = lst->next;
	}
	cheapest_node->cheapest = true;
}

void	init_node_a(t_list *a, t_list *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	cheapest_value(a);
}
