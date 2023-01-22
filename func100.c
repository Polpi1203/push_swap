/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:03:51 by polpi             #+#    #+#             */
/*   Updated: 2023/01/22 12:40:51 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	func_100(t_stack *stack)
{
	int	i;
	int	j;
	int	middle_size;

	printf("sizeB = %d\n", stack->size_b);
	middle_size = stack->size_a / 2;
	i = -1;
	while (++i < middle_size)
		func_pb(stack);
	i = -1;
	print_arrayb(stack);
	while (++i < stack->size_b)
	{
		stack->max = nb_maxb(stack);
		j = 0;
		while (stack->b[j] != stack->max)
			j++;
		if (j < stack->size_b / 2)
		{
			while(j > 0)
			{
				func_rb(stack);
				j--;
			}
		}
		else if (j > stack->size_b / 2)
		{
			while (j <= stack->size_b)
			{
				func_rrb(stack);
				j++;
			}
		}	
	}
	print_arrayb(stack);

}