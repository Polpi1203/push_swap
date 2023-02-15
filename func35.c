/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func35.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:02:29 by polpi             #+#    #+#             */
/*   Updated: 2023/02/15 15:58:46 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Sort B in descending order*/

void	func_35(t_stack *stack)
{
	stack->min = nb_minb(stack);
	stack->max = nb_maxb(stack);
	if (stack->b[2] == stack->min && stack->b[1] == stack->max)
		func_sb(stack);
	else if (stack->b[2] == stack->max && stack->b[1] == stack->min)
		func_rrb(stack);
	else if (stack->b[0] == stack->min && stack->b[1] == stack->max)
		func_rb(stack);
	else if (stack->b[0] == stack->min && stack->b[2] == stack->max)
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
