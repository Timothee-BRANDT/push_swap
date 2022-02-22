/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:58 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/22 23:05:21 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_content(int content)
{
	printf("%d\n", content);
}

void	print_list_a(t_list *a)
{
	printf("LIST A : \n");
	ft_lstiter(a, print_content);
}

void	print_list_b(t_list *b)
{
	printf("LIST B : \n");
	ft_lstiter(b, print_content);
}
