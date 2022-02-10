/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:28 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/10 22:36:46 by tbrandt          ###   ########.fr       */
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

void	mid_sort(t_list **a, t_list **b, char **tab)
{
	int	smaller;
	int	second_smaller;
	char **second_tab;

	smaller = get_smaller(tab);
	print_list_a(*a);
	push_first_smaller(a, b, smaller);
	print_list_a(*a);
	print_list_b(*b);
	second_tab = list_to_tab(*a);
	second_smaller = get_smaller(second_tab); 
	printf("second smaller = %d\n", second_smaller);
	printf("\n");
	push_second_smaller(a, b, second_smaller);
	print_list_b(*b);
	small_sort(a);
	print_list_a(*a);
	push_a(a, b);
	push_a(a, b);
	print_list_a(*a);
	print_list_b(*b);
}
