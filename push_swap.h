#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h> // removed at end

typedef	struct	s_lst{
	int				content;
	struct s_lst	*next;
}					t_lst;

int	is_digit(char *str);
int	is_int(char *str);
int	is_double(char **str);
int	check_error(char **tab);
t_list	*create_a(char **tab);
void	print_content(int content);
void	print_list_a(t_list *a);
void	print_list_b(t_list *a);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);

#endif
