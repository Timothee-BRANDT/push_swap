/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:54:23 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/14 20:04:39 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **list_to_tab(t_list *lst)
{
	char	**tab;

	tab = NULL;
	if (ft_lstsize(lst) == 4)
	{
		tab = malloc(sizeof(char *) * ft_lstsize(lst));
		tab[0] = malloc(sizeof(char) * ft_strlen(ft_itoa(lst->content)));
		tab[1] = malloc(sizeof(char) * ft_strlen(ft_itoa(lst->next->content)));
		tab[2] = malloc(sizeof(char) * ft_strlen(ft_itoa(lst->next->next->content)));
		tab[3] = malloc(sizeof(char) * ft_strlen(ft_itoa(lst->next->next->next->content)));
		tab[0] = ft_itoa(lst->content);
		tab[1] = ft_itoa(lst->next->content);
		tab[2] = ft_itoa(lst->next->next->content);
		tab[3] = ft_itoa(lst->next->next->next->content);
	}
	tab[4] = NULL;
	return (tab);
}

int	get_smaller(char **tab)
{
	int	i;
	int pos;

	pos = 0;
	i = 1;
	while (tab[i])
	{
		if (ft_atoi(tab[i]) < ft_atoi(tab[pos]))
			pos = i;
		i++;
	}
	pos++;
	return (pos);
}

int	check_void_arg(char *argv[])
{
	int	i;

	i = 0;
	while(argv[1][i] && argv[1][i] == ' ')
	{
		if (!argv[1][0])
			return (0);
		i++;
	}
	if (argv[1][i] == '\0')
		return (0);
	return (1);
}

void	start_sorting(t_list **a, t_list **b, char **tab)
{
	if (ft_lstsize(*a) == 2)
		sort_two(a);
	if (ft_lstsize(*a) == 3)
		small_sort(a);
	else if (ft_lstsize(*a) == 4)
		sort_four(a, b, tab);
	else if (ft_lstsize(*a) == 5)
		mid_sort(a, b, tab);
//	else
//		radix_sort(a, b);
}
