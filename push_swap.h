#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h> // removed at end

int	is_digit(char *str);
int	is_int(char *str);
int	is_double(char **str);
int	check_error(char **tab);
int	on_error(char *error, int code);
int	is_sorted_tab(char **tab);
t_list	*create_a(char **tab);
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
char	**change_number(char **tab);

#endif
