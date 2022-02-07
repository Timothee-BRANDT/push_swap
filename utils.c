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

int	is_sorted_tab(char **tab)
{
	int	i;

	i = 0;
	while(tab[i])
	{
		if (!tab[i + 1])
			return (1);
		if (ft_atoi(tab[i]) > ft_atoi(tab[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

char	**duplicate_tab(char **tab)
{
	char **copy;
	int	i;

	copy = malloc(sizeof(char *) * ft_strlen2d(tab) + 1);
	i = 0;
	while(tab[i])
	{
		copy[i] = tab[i];
		i++;
	}
	copy[i] = NULL;
	return (copy);
}

char	**change_number(char **tab)
{
	int	i;
	int	j;
	char **sorted;

	sorted = duplicate_tab(tab);
	swap_sort(sorted);
	i = 0;
	while(tab[i])
	{
		j = 0;
		while(sorted[j])
		{
			if (ft_atoi(tab[i]) == ft_atoi(sorted[j]))
				tab[i] = ft_itoa(j);
			j++;
		}
		i++;
	}
	return (tab);
}
