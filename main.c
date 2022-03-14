/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:40:47 by tbrandt           #+#    #+#             */
/*   Updated: 2022/03/14 17:20:29 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_size(char *argv[])
{
	int	i;
	int	sizer;

	i = 1;
	sizer = 0;
	while (argv[i])
	{
		sizer += size(argv[i]);
		i++;
	}
	return (sizer);
}

char	*make_string(char *argv[], int argc)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = malloc(sizeof(char) * (get_size(argv)) + (argc - 1));
	i = 1;
	k = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (str[k] == ' ')
				k++;
			str[k] = argv[i][j];
			j++;
			k++;
		}
		str[k] = ' ';
		i++;
	}
	str[k] = '\0';
	return (str);
}

int	main(int argc, char *argv[])
{
	char	**tab;
	char	*str;
	t_list	*a;
	t_list	*b;

	if (argc == 1)
		return (0);
	if (!check_void_arg(argv))
		return (on_error("Error\n", 0));
	if (argc == 2)
		tab = ft_split(argv[1], ' ');
	if (argc > 2)
	{
		str = make_string(argv, argc);
		tab = ft_split(str, ' ');
		free(str);
	}
	if (check_error(tab))
		return (on_error("Error\n", 0));
	change_number(tab);
	a = create_a(tab);
	if (is_sorted_list(&a))
		return (0);
	start_sorting(&a, &b);
	return (0);
}
