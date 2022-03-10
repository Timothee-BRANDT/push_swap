/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:37 by tbrandt           #+#    #+#             */
/*   Updated: 2022/03/08 16:44:04 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' && str[i + 1] == '\0')
		return (1);
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_int(char *str)
{
	long long	nb;

	nb = ft_atoll(str);
	if (ft_strlen(str) > 10)
		return (1);
	if (nb < INT_MIN || nb > INT_MAX)
		return (1);
	return (0);
}

int	is_double(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (!ft_strcmp(tab[i], tab[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_error(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (is_digit(tab[i]))
			return (1);
		if (is_int(tab[i]))
			return (1);
		if (is_double(tab))
			return (1);
//		free(tab[i]);
		i++;
	}
	return (0);
}
