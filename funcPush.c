/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcPush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:25:04 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/20 13:29:30 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func_pb(t_stack *stack)
{
	int	inter;
	int	i;

	i = -1;
	inter = stack->a[0];

	stack->size_a--;
	stack->size_b++;
	while (++i <= stack->size_a)
		stack->a[i] = stack->a[i+1];
	i = stack->size_b - 1;
	while (i > 0)
	{
		stack->b[i] = stack->b[i-1];
		i--;
	}
	stack->b[0] = inter;

	//stack->a[stack->size_a] = stack->a[stack->size_a + 1];
	ft_printf("pb\n");
	// printf("size de B = %d\n", stack->size_b);
	// print_array(stack->a, stack->size_a);
	// print_array(stack->b, stack->size_b);
	
}

void	func_pa(t_stack *stack)
{
	int	inter;
	int	i;

	i = 0;
	inter = stack->b[0];

	// printf("STACK->B[0] = %d\n", stack->b[0]);
	// printf("STACK->B[1] = %d\n", stack->b[1]);

	stack->size_b--;
	stack->size_a++;

	while (i <= stack->size_b)
	{
		stack->b[i] = stack->b[i+1];
		i++;
	}
	i = stack->size_a;
	while (i > 0)
	{
		stack->a[i] = stack->a[i-1];
		i--;
	}
	stack->a[0] = inter;
	ft_printf("pa\n");
	print_arrayA(stack);
	// printf("size de A = %d\n", stack->size_a);
	// print_array(stack->b, stack->size_b);
	// print_array(stack->a, stack->size_a);
	
}
