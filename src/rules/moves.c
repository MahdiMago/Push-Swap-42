#include "../../includes/push_swap.h"

void	sa(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	swap(list_a);
	// ft_printf("sa\n");
}

void	sb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	swap(list_b);
	// ft_printf("sb\n");
}

void	ss(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;

	swap(list_a);
	swap(list_b);
	// ft_printf("ss\n");
}

void	pa(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_b))
		return ;
	push_list(list_b, list_a);
	// ft_printf("pa\n");
}

void	pb(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a))
		return ;
	push_list(list_a, list_b);
	// ft_printf("pb\n");
}

void	ra(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	rotate(list_a);
	// ft_printf("ra\n");
}

void	rb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	rotate(list_b);
	// ft_printf("rb\n");
}

void	rr(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;
	rotate(list_a);
	rotate(list_b);
	// ft_printf("rr\n");
}

void	rra(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	reverse_rotate(list_a);
	// ft_printf("rra\n");
}

void	rrb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	reverse_rotate(list_b);
	// ft_printf("rrb\n");
}

void	rrr(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	// ft_printf("rrr\n");
}

void	rotate_both(t_list *cheapest_node, t_list **a, t_list **b)
{
	while (*a != cheapest_node && *b != cheapest_node->target_node)
		rr(a, b);
	while (*a != cheapest_node)
		ra(a);
	while (*b != cheapest_node->target_node)
		rb(b);
	current_index(*a);
	current_index(*b);
}

void	rev_rotate_both(t_list *cheapest_node, t_list **a, t_list **b)
{
	while (*a != cheapest_node && *b != cheapest_node->target_node)
		rrr(a, b);
	while (*a != cheapest_node)
		rra(a);
	while (*b != cheapest_node->target_node)
		rrb(b);
	current_index(*a);
	current_index(*b);
}


// void	rotate_both(t_list *cheapest_node, t_list **a, t_list **b)
// {
// 	while (*a != cheapest_node
// 		&& *b != cheapest_node->target_node)
// 		rr(a, b);
// 	current_index(*a);
// 	current_index(*b);
// }

// void	rev_rotate_both(t_list *cheapest_node, t_list **a, t_list **b)
// {
// 	while (*a != cheapest_node
// 		&& *b != cheapest_node->target_node)
// 		rrr(a, b);
// 	current_index(*a);
// 	current_index(*b);
// }
