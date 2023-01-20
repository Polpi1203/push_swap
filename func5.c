/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:55 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/20 13:30:13 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushK_to_b(t_stack *stack)
{
	int i;

	i = 0;
	while (i != 3)
	{
		if (stack->a[0] == stack->k[0] || stack->a[0] == stack->k[1] 
			|| stack->a[0] == stack->k[2])
		{
			func_pb(stack);
			i++;
			print_arrayA(stack);
		}
		else
		{
			func_ra(stack);
			print_arrayA(stack);
		}
	}
}

void	func_5(t_stack *stack)
{
	//print_arrayA(stack);//test
	printf("sizeA : %d\n", stack->size_a);//test
	little_3_nb(stack);
	//print_arrayK(stack);//test
	//print_arrayA(stack);//test
	pushK_to_b(stack);
	//print_arrayA(stack);//test
	stack->size_b--;
	printf("sizeB : %d\n", stack->size_b);//test
	print_arrayB(stack);//test
	func_35(stack);
	print_arrayB(stack);//test
	if (stack->a[0] > stack->a[1])
		func_sa(stack);
	func_pa(stack);
	func_pa(stack);
	func_pa(stack);
	print_arrayA(stack);
}
