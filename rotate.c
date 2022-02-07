/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:17 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/03 21:02:53 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a)
{
	t_list *tmp;

	if (!*a || !(*a)->next)
		return ;
	ft_putstr("ra\n");
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);
}

void	rotate_b(t_list **b)
{
	t_list *tmp;

	if (!*b || !(*b)->next)
		return ;
	ft_putstr("rb\n");
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_back(b, tmp);
}

void	reverse_rotate_a(t_list **a)
{
	t_list	*tmp;

	ft_putstr("rra\n");
	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front(a, tmp->next);
	tmp->next = NULL;
}

void	reverse_rotate_b(t_list **b)
{
	t_list	*tmp;

	ft_putstr("rrb\n");
	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front(b, tmp->next);
	tmp->next = NULL;
}
