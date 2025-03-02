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

t_list	*find_min(t_list *list)
{
	t_list	*min_node;
	long	min_value;

	if (!list)
		return (NULL);
	min_value = LONG_MAX;
	while (list)
	{
		if (min_value > list->value)
		{
			min_value = list->value;
			min_node = list;
		}
		list = list->next;
	}
	return (min_node);
}

int	list_len(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
