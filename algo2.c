/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:30:20 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/27 09:38:23 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	if (tmp->content > tmp->next->content)
		swap_a(a);
}

void	small_sort(t_list **list)
{
	t_list	*tmp;
	int		a;
	int		b;
	int		c;

	tmp = *list;
	a = tmp->content;
	b = tmp->next->content;
	c = tmp->next->next->content;
	if (a > b && b < c && a < c)
		swap_a(list);
	else if (a < b && c < a)
		reverse_rotate_a(list);
	else if (a > b && b < c)
		rotate_a(list);
	else if (a > b && b > c)
	{
		rotate_a(list);
		swap_a(list);
	}
	else if (a < b && b > c && a < c)
	{
		swap_a(list);
		rotate_a(list);
	}
}

void	sort_four(t_list **a, t_list **b)
{
	int	smaller;

	smaller = get_smaller_pos(a);
	push_first_smaller_four(a, b, smaller);
	small_sort(a);
	push_a(a, b);
}

void	mid_sort(t_list **a, t_list **b)
{
	int		smaller;
	int		second_smaller;
	//char	**second_tab;

	print_list_a(*a);
	smaller = get_smaller_pos(a);
	printf("smaller:%d\n", smaller);
	push_first_smaller(a, b, smaller);
	second_smaller = get_smaller_pos(a);
	push_second_smaller(a, b, second_smaller);
	small_sort(a);
	push_a(a, b);
	push_a(a, b);
}
