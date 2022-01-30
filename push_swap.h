#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h> // removed at end



int	is_digit(char *str);
int	is_int(char *str);
int	is_double(char **str);
int	check_error(char **tab);
t_list	*create_a(char **tab);
void	print_content(void *content);
void	print_list_a(t_list *a);
void	print_list_b(t_list *a);
void	swap_a(t_list **a);
void	push_a(t_list **a, t_list **b);

#endif
