/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:28 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/22 23:57:21 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sort(char **tab)
{
	int		i;
	int		value;

	while (!is_sorted_tab(tab))
	{
		i = 1;
		while (tab[i])
		{
			if (ft_atoi(tab[i]) < ft_atoi(tab[i - 1]))
			{
				value = ft_atoi(tab[i - 1]);
				tab[i - 1] = tab[i];
				tab[i] = ft_itoa(value);
			}
			i++;
		}
	}
}

void	push_first_smaller(t_list **a, t_list **b, int smaller)
{	
	if (smaller == 1)
		push_b(a, b);
	else if (smaller == 2)
	{
		rotate_a(a);
		push_b(a, b);
	}
	else if (smaller == 3)
	{
		rotate_a(a);
		rotate_a(a);
		push_b(a, b);
	}
	else if (smaller == 4)
	{
		reverse_rotate_a(a);
		reverse_rotate_a(a);
		push_b(a, b);
	}
	else
	{
		reverse_rotate_a(a);
		push_b(a, b);
	}
}

void	push_second_smaller(t_list **a, t_list **b, int smaller)
{
	if (smaller == 1)
		push_b(a, b);
	else if (smaller == 2)
	{
		rotate_a(a);
		push_b(a, b);
	}
	else if (smaller == 3)
	{
		rotate_a(a);
		rotate_a(a);
		push_b(a, b);
	}
	else if (smaller == 4)
	{
		reverse_rotate_a(a);
		push_b(a, b);
	}
}

void	push_first_smaller_four(t_list **a, t_list **b, int smaller)
{
	if (smaller == 1)
		push_b(a, b);
	else if (smaller == 2)
	{
		rotate_a(a);
		push_b(a, b);
	}
	else if (smaller == 3)
	{
		rotate_a(a);
		rotate_a(a);
		push_b(a, b);
	}
	else
	{
		reverse_rotate_a(a);
		push_b(a, b);
	}
}

void	radix_sort(t_list **a, t_list **b)
{
	t_list *tmp;
	int	size;
	int	i;
	int	j;

	tmp = *a;
	size = ft_lstsize(*a);
	i = 0;
	j = 0;
	while (!is_sorted_list(a))
	{
		while (i < size)
		{
			if ((tmp->content >> j & 1) == 1)
				rotate_a(a);
			else
				push_b(a, b);
			tmp = *a;
			i++;
		}
		while (ft_lstsize(*b) > 0)
			push_a(a, b);
		tmp = *a;
		i = 0;
		j++;
	}
}
