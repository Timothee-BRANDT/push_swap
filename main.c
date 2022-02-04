#include "push_swap.h"

int	on_error(char *error, int code)
{
	ft_putstr(error);
	return (code);
}

int	check_arg(char *argv[])
{
	if (!argv[1][0])
		return (on_error("Error\n", 0));
	return (1);
}

char **make_tab(int argc, char *argv[])
{
	char **tab;
	int	i;
	int	j;

	i = 1;
	j = 0;
	tab = malloc(sizeof(char *) * argc);
	while(argv[i])
	{
		tab[j] = malloc(sizeof(char) * ft_strlen(argv[i]) + 1);
		tab[j] = argv[i];
		i++;
		j++;
	}
	tab[i] = NULL;
	return (tab);
}

int main(int argc, char *argv[])
{
	char **tab;
	t_list *a;
	t_list *b;

	if (argc == 1)
		return (0);
	if(!check_arg(argv))
		return (0);
	a = malloc(sizeof(t_list));
	b = ft_lstnew(20);
	ft_lstadd_back(&b, ft_lstnew(40));
	ft_lstadd_back(&b, ft_lstnew(60));
	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		if (check_error(tab))
			return (on_error("Error\n", 0));
		a = create_a(tab);
		print_list_a(a);
		print_list_b(b);
		printf("\n");
		rotate_b(&b);
		print_list_a(a);
		print_list_b(b);
	}
	if (argc > 2)
	{
		tab = make_tab(argc, argv);
		int i = 0;
		while(i < 4)
		{
			printf("%s\n", tab[i++]);
		}
		if (check_error(tab))
			return (on_error("Error\n", 0));
		a = create_a(tab);
		print_list_a(a);
		print_list_b(b);
		printf("\n");
		rotate_b(&b);
		print_list_a(a);
		print_list_b(b);
	}
	return (0);
}
