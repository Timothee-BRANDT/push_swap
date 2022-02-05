/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:28 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/03 21:00:27 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(char **tab)
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

void	swap_sort(char **tab)
{
	int		i;
	int		value;

	while (!is_sorted(tab))
	{
		i = 0;
		while (tab[i])
		{
			if (!tab[i + 1])
				return ;
			if (ft_atoi(tab[i]) > ft_atoi(tab[i + 1]))
			{
				printf("tab[i] = %s\n", tab[i]);
				value = ft_atoi(tab[i]);
				printf("value = %d\n", value);
				tab[i + 1] = tab[i];
				printf("tab[i + 1] = %s\n", tab[i + 1]);
				tab[i] = ft_itoa(value);
			}
			i++;
		}
	}
}
