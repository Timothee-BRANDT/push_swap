#include "push_swap.h"

void	print_content(void *content)
{
	printf("%d\n", *(int *)content); 
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
