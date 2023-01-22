/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:19 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/22 13:03:21 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack stack;
	int index;

	index = -1;
	stack.size_a = size_str(av[1]);
	stack.b = 0;
	if (ac == 2)
	{
		char    **result;

		result = malloc(sizeof(char *) * size_str(av[1] + 1));
		stack.a = malloc(sizeof(int) * (size_str(av[1])));
		stack.b = malloc(sizeof(int) * (size_str(av[1])));
		if (stack.a == NULL && stack.b == NULL && result == NULL)
			return (0);
		result = ft_split(av[1], 32); // Give the string and separator
		while (result[++index] != 0)
			stack.a[index] = ft_atoi(result[index]);
		stack.min = nb_min(stack);
		stack.max = nb_max(stack);
		printf("MIN = %d\nMAX = %d\n", stack.min, stack.max);// A DELETE
		if (stack.size_a == 2)
			func_3(&stack);
		else if (stack.size_a == 4)
			func_5(&stack);
		else if (stack.size_a <= 100)
			func_100(&stack); 
	}
	// if (ac > 2)
	// {
	// 	a = malloc(sizeof(int) * (ac - 1));
	// 	if (a == NULL)
	// 		return (0);
	// 	while (++index < (ac - 1))
	// 		a[index] = ft_atoi(av[index + 1]);
	// }
}

/*
while (nb[0] != min && nb[end] != max)
	if (nb > nb+1 && nb != max)
		swap
	rotate
*/
