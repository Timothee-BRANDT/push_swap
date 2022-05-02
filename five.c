/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:54:23 by tbrandt           #+#    #+#             */
/*   Updated: 2022/05/02 11:22:25 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_smaller(char **tab)
{
	int	i;
	int	pos;

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
