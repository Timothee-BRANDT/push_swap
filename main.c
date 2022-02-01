#include "push_swap.h"

int main(int argc, char *argv[])
{
	char **tab;
	t_list *a;
	t_list *b;

	tab = NULL;
	b = ft_lstnew(50);
	ft_lstadd_back(&b, ft_lstnew(22));
	if (argc > 1)
	{
		if (argc == 2)
		{
			tab = ft_split(argv[1], ' ');
			a = create_a(tab);
			print_list_a(a);
			print_list_b(b);
			printf("\n");
			push_a(&a, &b);
			print_list_a(a);
			print_list_b(b);
		}
		if (check_error(tab))
			write(2, "Error\n", 6);
	}
	return (0);
}
