/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:55 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/18 14:48:32 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func_5(t_stack *stack)
{
	func_pb(stack);
	func_pb(stack);
	func_3(stack);
	while (stack->size_a < 4)
	{
		if (stack->b[0] > stack->a[0])
		{
			func_pa(stack);
			func_ra(stack);
		}
		else
			func_pa(stack);
	}
	print_array(stack);
}
