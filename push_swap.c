/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:19 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/26 13:56:24 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack stack;
	
	printf("VALUE AC = %d\n", ac);
	if (ac == 2)
	{
		stack.size_a = size_str(av[1]);
		def_value(&stack);
		create_stack_str(&stack, av[1]);
	}
	else if (ac > 2)
	{
		stack.size_a = ac - 2;
		def_value(&stack);
		create_stack_arg(&stack, av);
	}
	stack.min = nb_min(stack);
	stack.max = nb_max(stack);
	printf("MIN = %d\nMAX = %d\n", stack.min, stack.max);// A DELETE
	printf("SIZE A = %d\n", stack.size_a);
	if (stack.size_a == 2)
		func_3(&stack);
	else if (stack.size_a == 4)
		func_5(&stack);
	else if (stack.size_a > 4)
	{
		write (1, "OK", 2);
		big_func(&stack); 
	}
	printf("Count = %d\n", stack.count);
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
