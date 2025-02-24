#include "../../includes/push_swap.h"

void	printf_list(t_list *list)
{
	while (list)
	{
		printf("%d\n", list->value);
		list = list->next;
	}
	printf("--------------\n");
}