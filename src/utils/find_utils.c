#include "../../includes/push_swap.h"

t_list	*find_big(t_list *list)
{
	t_list	*biggest;

	if (!list)
		return (list);
	biggest = list;
	while(list)
	{
		if (biggest->value < list->value)
			biggest = list;
		list = list->next;
	}
	return (biggest);
}

t_list	*find_last(t_list *list)
{
	while (list->next)
		list = list->next;
	return (list);
}