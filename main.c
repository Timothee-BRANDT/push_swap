/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:40:47 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/22 23:33:57 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void		ft_lstdel(t_list **list)
{
	t_list	*tmp;

	while (*list != NULL)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	free(*list);
}*/

int	main(int argc, char *argv[])
{
	char **tab;
	t_list *a;
	t_list *b;

	if (argc == 1)
		return (0);
	if(!check_void_arg(argv))
		return (on_error("Error\n", 0));
	if (argc == 2)
		tab = ft_split(argv[1], ' ');
	if (argc > 2)
		tab = argv + 1;
	if (check_error(tab))
		return (on_error("Error\n", 0));
	change_number(tab, argc);
	a = create_a(tab, argc);
	if (is_sorted_list(&a))
		return (0);
	start_sorting(&a, &b);
//	print_list_a(a);
	system("leaks push_swap | grep leaked\n");
	return (0);
}
