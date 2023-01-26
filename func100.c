/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:03:51 by polpi             #+#    #+#             */
/*   Updated: 2023/01/26 09:56:25 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	sorted_list(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->size_a > 1)
	{
		while (i < stack->size_a - 1)
		{
			if (stack->a[i] > stack->a[i + 1])
				return (0);
			i++;
		}
	}
	return (1);
}

void	big_func(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	//printf("RESULT SORTED LIST = %d\n", sorted_list(stack));
	while (sorted_list(stack) == 0)
	{
		j = 0;
		while (j < stack->size_a && sorted_list(stack) == 0)
		{
			j++;
			if (((stack->a[0] >> i) & 1) == 0)
				func_pb(stack);
			else
				func_ra(stack);
			// sleep(1);
			// printf("SIZE OF J = %d\n", j);
			// printf("SIZE OF A = %d\n", stack->size_a);
			// print_arrayb(stack);
		}
		while (stack->size_b > 0)
		{
			func_pa(stack);
			//printf("SIZE B = %d\n", stack->size_b);
			//sleep(1); 
		}
		i++;
	}
}
/*void	func_100(t_stack *stack)
{
	int	i;
	int	j;
	int	inter_size;

	i = -1;
	inter_size = stack->size_a;
	while (++i <= inter_size)
	{
		printf("SizeofA = %d\n", stack->size_a);
		stack->min = nb_min(*stack);
		j = 0;
		while (stack->a[j] != stack->min)
			j++;
		if (stack->size_a == 2)
			func_3(stack);
		else if (j <= stack->size_a / 2)
		{
			while (j > 0)
			{
				
				func_ra(stack);
				j--;
			}
		}
		else if(j > stack->size_a / 2)
		{
			while (j <= stack->size_a)
			{
				func_rra(stack);
				j++;
			}
		}	
		func_pb(stack);
	}
	stack->size_b--;
	inter_size = stack->size_b;
	printf("size of B = %d\n", stack->size_b);
	i = -1;
	while (++i < inter_size)
		func_pa(stack);
	print_arraya(stack);
}
*/

/*func_pa(stack);
	func_pa(stack);
	func_pa(stack);
{
	int	i;
	int	j;
	int	middle_size;

	middle_size = stack->size_a / 2;
	printf("MiddleSize = %d\n", middle_size);
	i = -1;
	while (++i < middle_size)
		func_pb(stack);
	stack->size_b--;
	i = -1;
	while (++i < stack->size_b + 1)
	{
		printf("SIZE to B = %d\n", stack->size_b);
		print_arrayb(stack);
		stack->max = nb_maxb(stack);
		printf("Value to MAX = %d\n", stack->max);
		j = 0;
		while (stack->b[j] != stack->max)
			j++;
		printf("Value of J = %d\n", j);
		if (stack->size_b == 2)
		{
			func_35(stack);
			func_pa(stack);
			func_pa(stack);
			func_pa(stack);
		}
		else if (j < middle_size / 2)
		{
			while(j > 0)
			{
				func_rb(stack);
				j--;
			}
		}
		else if (j > middle_size / 2)
		{
			while (j <= stack->size_b)
			{
				func_rrb(stack);
				j++;
			}
		}
		func_pa(stack);	
	}
	print_arrayb(stack);

}*/