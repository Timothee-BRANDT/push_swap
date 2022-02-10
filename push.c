/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:28 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/10 22:33:44 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list *tmp;

	if (!b)
		return ;
	ft_putstr("pa\n");
	tmp = NULL;
	tmp = *b;
	*b = (*b)->next;
	ft_lstadd_front(a, tmp);
}

void	push_b(t_list **a, t_list **b)
{
	t_list *tmp;

	if (!a)
		return ;
	ft_putstr("pb\n");
	tmp = NULL;
	tmp = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, tmp);
}
