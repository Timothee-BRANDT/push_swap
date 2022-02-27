/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:28 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/22 23:56:34 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	on_error(char *error, int code)
{
	ft_putstr(error);
	return (code);
}

int	is_sorted_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (!tab[i + 1])
			return (1);
		if (ft_atoi(tab[i]) > ft_atoi(tab[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	is_sorted_list(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

char	**duplicate_tab(char **tab)
{
	char	**copy;
	int		i;

	copy = NULL;
	copy = malloc(sizeof(char *) * ft_strlen2d(tab) + 1);
	i = 0;
	while (tab[i])
	{
		copy[i] = tab[i];
		i++;
	}
	return (copy);
}

char	**change_number(char **tab, int argc)
{
	int		i;
	int		j;
	char	**sorted;

	sorted = NULL;
	sorted = duplicate_tab(tab);
	swap_sort(sorted);
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (sorted[j])
		{
			if (ft_atoi(tab[i]) == ft_atoi(sorted[j]))
				tab[i] = ft_itoa(j);
			j++;
		}
		i++;
	}
	if (argc == 2)
		free_tab(sorted);
	return (tab);
}
