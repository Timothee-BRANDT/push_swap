/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:54:23 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/10 22:36:48 by tbrandt          ###   ########.fr       */
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
