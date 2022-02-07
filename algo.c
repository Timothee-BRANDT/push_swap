/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:28 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/05 17:08:12 by tbrandt          ###   ########.fr       */
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

void	small_sort(t_list **list_a)
{
	t_list	*tmp;
	int		a;
	int		b;
	int		c;

	tmp = *list_a;
	a = tmp->content;
	b = tmp->next->content;
	c = tmp->next->next->content;
	//while(!is_sorted_tab(a)) // CHECK LIST NOT TAB
	{
		if (a > b && b < c && a < c)
			swap_a(list_a);
		else if (a < b && c < a)
			reverse_rotate_a(list_a);
		else if (a > b && b < c)
			rotate_a(list_a);
		else if (a > b && b > c)
			swap_a(list_a);
		else if (a > b && b < c)
			reverse_rotate_a(list_a);
		else if (a < b && b > c && a < c)
			reverse_rotate_a(list_a);
	}
}
