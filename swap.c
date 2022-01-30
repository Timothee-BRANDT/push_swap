#include "push_swap.h"

void	swap_a(t_list **a)
{
	t_list *tmp;

	if (!*a)
		return ;
	ft_putstr("sa\n");
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
}

void	swap_b(t_list **b)
{
	t_list *tmp;

	if (!*b)
		return ;
	ft_putstr("sb\n");
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
}

void	swap_both(t_list **a, t_list **b)
{
	t_list *tmp;

	ft_putstr("ss\n");
	if(*a)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = (*a)->next;
		(*a)->next = tmp;
	}
	if(*b)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = (*b)->next;
		(*b)->next = tmp;
	}
}
