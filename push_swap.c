
#include "push_swap.h"

int main(int ac, char **av)
{
	int *a;
	int *b;
	int index;
	int size;

	a = NULL;
	b = NULL;
	index = -1;
	size = size_str(av[1]);
	if (ac == 2)
	{
		char    **result;

		result = malloc(sizeof(char *) * size_str(av[1] + 1));
		a = malloc(sizeof(int) * (size_str(av[1]) + 1));
		b = malloc(sizeof(int) * (size_str(av[1]) + 1));
		if (a == NULL && b == NULL && result == NULL)
			return (0);
		result = ft_split(av[1], 32); // Give the string and separator
		while (result[++index] != 0)
			a[index] = ft_atoi(result[index]);
		ft_printf("size = %d\n", size);
		if (size == 2)
			a = func_3(a, size);
		print_array(a, size);
	}

	if (ac > 2)
	{
		a = malloc(sizeof(int) * (ac - 1));
		if (a == NULL)
			return (0);
		while (++index < (ac - 1))
			a[index] = ft_atoi(av[index + 1]);
	}
}

/*
while (nb[0] != min && nb[end] != max)
	if (nb > nb+1 && nb != max)
		swap
	rotate
*/
