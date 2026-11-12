#include "push_swap.h"
#include <stdio.h>

int	ft_lstindex(t_list *first, int i)
{
	int	j;

	j = 0;
	while (j < i && first)
	{
		j++;
		first = first->next;
	}
	return (first->content);
}
