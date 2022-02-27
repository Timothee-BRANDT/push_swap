/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:04:39 by tbrandt           #+#    #+#             */
/*   Updated: 2022/02/27 09:39:16 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h> // removed at end

int		is_digit(char *str);
int		is_int(char *str);
int		is_double(char **str);
int		check_error(char **tab);
int		on_error(char *error, int code);
int		is_sorted_tab(char **tab);
int		is_sorted_list(t_list **list);
int		on_error(char *error, int code);
int		check_void_arg(char *argv[]);
t_list	*create_a(char **tab);
void	start_sorting(t_list **a, t_list **b);
void	free_tab(char **tab);
void	swap_sort(char **tab);
void	print_content(int content);
void	print_list_a(t_list *a);
void	print_list_b(t_list *a);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	rotate_a(t_list **a);
void	rotate_b(t_list **a);
void	reverse_rotate_a(t_list **a);
void	non_negative(t_list **list);
char	**change_number(char **tab, int argc);
void	sort_two(t_list **a);
void	small_sort(t_list **list);
void	sort_four(t_list **a, t_list **b);
void	mid_sort(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b);
int		get_smaller_pos(t_list **a);
void	push_first_smaller(t_list **a, t_list **b, int smaller);
void	push_second_smaller(t_list **a, t_list **b, int smaller);
void	push_first_smaller_four(t_list **a, t_list **b, int smaller);
char	**list_to_tab(t_list *lst);

#endif
