/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:54:23 by tbrandt           #+#    #+#             */
/*   Updated: 2022/03/14 17:19:27 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_smaller_pos(t_list **pile)
{
	t_list	*ptmp;
	int		tmp;
	int		pos;
	int		i;

	ptmp = *pile;
	tmp = ptmp->content;
	pos = 1;
	i = 1;
	while (ptmp->next)
	{
		i++;
		ptmp = ptmp->next;
		if (tmp > ptmp->content)
		{
			tmp = ptmp->content;
			pos = i;
		}
	}
	i = 0;
	return (pos);
}

int	check_void_arg(char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i] && argv[1][i] == ' ')
	{
		if (!argv[1][0])
			return (0);
		i++;
	}
	if (argv[1][i] == '\0')
		return (0);
	return (1);
}

void	start_sorting(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
		sort_two(a);
	if (ft_lstsize(*a) == 3)
		small_sort(a);
	else if (ft_lstsize(*a) == 4)
		sort_four(a, b);
	else if (ft_lstsize(*a) == 5)
		mid_sort(a, b);
	else
		radix_sort(a, b);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab[i]);
	free(tab);
}
