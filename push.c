#include "push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list *tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	tmp->next = (*b)->next;
	ft_lstadd_front(a, tmp);
}
