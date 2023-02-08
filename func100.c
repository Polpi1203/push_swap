/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:03:51 by polpi             #+#    #+#             */
/*   Updated: 2023/02/08 11:34:04 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	sorted_list(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->size_a > 1)
	{
		while (i < stack->size_a)
		{
			if (stack->a[i] > stack->a[i + 1])
				return (0);
			i++;
		}
	}
	return (1);
}

int	topush(t_stack *stack, int i)
{
	printf("Value i : %d---- Stack->[0] : %d :topush : %d\n",i, stack->a[0], ((stack->a[0] >> i) & 1));
	if ((stack->a[0] >> i) & 1)
		return (0);
	return (1);
}

void	big_func(t_stack *stack)
{
	int	i;
	int	j;
	int inter;

	i = 0;
	inter = stack->size_a;
	//printf("RESULT SORTED LIST = %d\n", sorted_list(stack));
	while (sorted_list(stack) == 0)
	{
		j = 0;
		while (j <= inter)
		{
			printf("SIZE A = %d\n", stack->size_a);
			printf("SIZE J = %d\n", j);
			printf("SIZE I = %d\n", i);
			j++;
			if (topush(stack, i) == 1)
				func_pb(stack);
			else
				func_ra(stack);
		}
		while (stack->size_b > 0)
		{
			func_pa(stack);
		}
		i++;
		printf("value i: %d\n", i);
		print_arraya(stack);
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