#include "push_swap.h"

int	on_error(char *error, int code)
{
	ft_putstr(error);
	return (code);
}

int	check_void_arg(char *argv[])
{
	int	i;

	i = 0;
	while(argv[1][i] && argv[1][i] == ' ')
	{
		if (!argv[1][0])
			return (0);
		i++;
	}
	if (argv[1][i] == '\0')
		return (0);
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
	tab[j] = NULL;
	return (tab);
}

int main(int argc, char *argv[])
{
	char **tab;
	t_list *a;
	t_list *b;

	if (argc == 1)
		return (0);
	if(!check_void_arg(argv))
		return (on_error("Error\n", 0));
	a = malloc(sizeof(t_list));
	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		if (check_error(tab))
			return (on_error("Error\n", 0));
		change_number(tab);
		a = create_a(tab);
		mid_sort(&a, &b, tab);
	}
	if (argc > 2)
	{
		tab = make_tab(argc, argv);
		if (check_error(tab))
			return (on_error("Error\n", 0));
		change_number(tab);
		a = create_a(tab);
		list_to_tab(a);
	}
	return (0);
}
