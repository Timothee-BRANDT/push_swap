/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:53:13 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/14 19:03:32 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_a(char **tab, int argc)
{
	t_list	*a;
	int		i;

	i = 0;
	a = ft_lstnew(ft_atoi(tab[i]));
	while (tab[++i])
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(tab[i])));
	if (argc == 2)
		free_tab(tab);
	return (a);
}
