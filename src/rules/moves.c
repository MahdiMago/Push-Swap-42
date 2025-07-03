#include "../../includes/push_swap.h"

void	sa(t_list **list_a)
{
	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	swap(list_a);
	ft_printf("sa\n");
}

void	sb(t_list **list_b)
{
	if (!list_b || !(*list_b) || !(*list_b)->next)
		return ;
	swap(list_b);
	ft_printf("sb\n");
}

void	ss(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a)
		|| !(*list_a)->next || !(*list_b)
		|| !(*list_b)->next)
		return ;

	swap(list_a);
	swap(list_b);
	ft_printf("ss\n");
}

void	pa(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_b))
		return ;
	push_list(list_b, list_a);
	ft_printf("pa\n");
}

void	pb(t_list **list_a, t_list **list_b)
{
	if (!list_a || !list_b || !(*list_a))
		return ;
	push_list(list_a, list_b);
	ft_printf("pb\n");
}
