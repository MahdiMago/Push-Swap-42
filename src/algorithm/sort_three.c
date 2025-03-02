#include "../../includes/push_swap.h"

void	sort_three(t_list **list)
{
	t_list	*big_value;

	big_value = find_big(*list);
	printf_list(*list);
	if (big_value == *list)
	{
		ra(list);
	}
	else if (big_value == (*list)->next)
	{
		rra(list);
	}
	if ((*list)->value > (*list)->next->value)
		sa(list);
	printf_list(*list);
}
