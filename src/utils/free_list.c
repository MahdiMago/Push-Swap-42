#include "../..//includes/push_swap.h"

void	free_list(t_list **list, t_list **list_b)
{
	t_list	*temp;

	while (*list)
	{
		temp = *list;
		*list = (*list)->next;
		if (temp)
			free(temp);
	}
	while (*list_b)
	{
		temp = *list_b;
		*list_b = (*list_b)->next;
		if (temp)
			free(temp);
	}
}