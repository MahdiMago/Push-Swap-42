#include "../../includes/push_swap.h"

void	sa(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	swap(*list_a);
	ft_printf("sa\n");
}

void	sb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	swap(*list_b);
	ft_printf("sb\n");
}

void	ss(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;

	swap(*list_a);
	swap(*list_b);
	ft_printf("ss\n");
}

void	pa(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;
	push_list(list_b, list_a);
}

void	pb(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;
	push_list(list_a, list_b);
}

void	ra(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	rotate(list_a);
	ft_printf("ra\n");
}

void	rb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	rotate(list_b);
	ft_printf("rb\n");
}

void	rr(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;
	rotate(list_a);
	rotate(list_b);
}

void	rra(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	reverse_rotate(list_a);
	ft_printf("rra\n");
}

void	rrb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	reverse_rotate(list_b);
	ft_printf("rrb\n");
}

void	rrr(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	ft_printf("rrr\n");
}