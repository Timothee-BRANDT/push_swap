/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:28 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/07 23:36:52 by tbrandt          ###   ########.fr       */
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
	if (is_sorted_list(&tmp))
		printf("SORTED\n");
	a = tmp->content;
	b = tmp->next->content;
	c = tmp->next->next->content;
		while(!is_sorted_list(&tmp))
		{
			if (a > b && b < c && a < c)
			{
				printf("test 1\n");
				swap_a(list);
			}
			else if (a < b && c < a)
			{
				printf("test 2\n");
				reverse_rotate_a(list);
			}
			else if (a > b && b < c)
			{
				printf("test 3\n");
				rotate_a(list);
			}
			else if (a > b && b > c)
			{
				printf("test 4\n");
				rotate_a(list);
				swap_a(list);
			}
			else if (a < b && b > c && a < c)
			{
				printf("test 5\n");
				swap_a(list);
				rotate_a(list);
			}
		}
}
