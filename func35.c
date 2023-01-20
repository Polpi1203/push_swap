/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func35.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:02:29 by polpi             #+#    #+#             */
/*   Updated: 2023/01/20 14:11:41 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func_35(t_stack *stack)
{
	printf("OK\n");//test
	stack->min = nb_minB(stack);
	stack->max = nb_maxB(stack);
	printf("MIN = %d\nMAX = %d\n", stack->min, stack->max);
	if (stack->b[stack->size_b] == stack->min && stack->b[1] == stack->max)
		func_sb(stack);
	else if (stack->b[stack->size_b] == stack->max && stack->b[1] == stack->min)
		func_rrb(stack);
	else if(stack->b[0] == stack->min && stack->b[1] == stack->max)
		func_rb(stack);
	else if (stack->b[0] == stack->min && stack->b[stack->size_b] == stack->max)
	{
		func_sb(stack);
		func_rrb(stack);
	}
	else if (stack->b[0] == stack->max && stack->b[1] == stack->min)
	{
		func_sb(stack);
		func_rb(stack);
	}
}
