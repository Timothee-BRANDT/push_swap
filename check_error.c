#include "push_swap.h"

int	is_digit(char *str)
{
	int	i;
	i = 0;

	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_int(char *str)
{
	long long nb;

	nb = ft_atoll(str);
	if (nb < INT_MIN || nb > INT_MAX)
		return (1);
	return (0);
}

int	is_double(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (!ft_strcmp(tab[i], tab[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_error(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (is_digit(tab[i]))
			return (1);
		else if (is_int(tab[i]))
			return (1);
		else if (is_double(tab))
			return (1);
		i++;
	}
	return (0);
}

t_list	*create_a(char **tab)
{
	t_list *a;
	int	i;

	i = 0;
	a =	 ft_lstnew(tab[i]);
	while (tab[++i])
		ft_lstadd_back(&a, ft_lstnew(tab[i]));
	return (a);
}
