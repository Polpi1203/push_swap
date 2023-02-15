/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:03:51 by polpi             #+#    #+#             */
/*   Updated: 2023/02/15 16:21:24 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Control if the list is sorted*/

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

/*Returns 0 if the bit of i it's egal to 1*/

int	topush(t_stack *stack, int i)
{
	if ((stack->a[0] >> i) & 1)
		return (0);
	return (1);
}

/*Sort the list for more than 5 number*/

void	big_func(t_stack *stack)
{
	int	i;
	int	j;
	int	inter;

	i = 0;
	inter = stack->size_a;
	while (sorted_list(stack) == 0)
	{
		j = 0;
		while (j < inter)
		{
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
	}
}
