/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:38:14 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/15 16:29:09 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Sort list for 3 numbers*/

void	sort_3_nbr(t_stack *stack)
{
	if (stack->a[2] == stack->min && stack->a[1] == stack->max)
		func_rra(stack);
	else if (stack->a[2] == stack->min && stack->a[0] == stack->max)
	{
		func_sa(stack);
		func_rra(stack);
	}
	else if (stack->a[1] == stack->max && stack->a[0] == stack->min)
	{
		func_sa(stack);
		func_ra(stack);
	}
	else if (stack->a[1] == stack->min && stack->a[0] == stack->max)
		func_ra(stack);
	else if (stack->a[2] == stack->max && stack->a[1] == stack->min)
		func_sa(stack);
}
