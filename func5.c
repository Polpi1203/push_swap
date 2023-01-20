/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:55 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/20 14:28:41 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushk_to_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (i != 3)
	{
		if (stack->a[0] == stack->k[0] || stack->a[0] == stack->k[1]
			|| stack->a[0] == stack->k[2])
		{
			func_pb(stack);
			i++;
		}
		else
			func_ra(stack);
	}
}

void	func_5(t_stack *stack)
{
	little_3_nb(stack);
	pushK_to_b(stack);
	stack->size_b--;
	func_35(stack);
	if (stack->a[0] > stack->a[1])
		func_sa(stack);
	func_pa(stack);
	func_pa(stack);
	func_pa(stack);
	free (stack->k);
	print_arrayA(stack);
}
