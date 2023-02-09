/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolsB.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:07:45 by polpi             #+#    #+#             */
/*   Updated: 2023/02/09 18:25:55 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Forget the max number from B*/

int	nb_maxb(t_stack *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack->b[0];
	while (i <= stack->size_b)
	{
		if (stack->b[i] > max)
			max = stack->b[i];
		i++;
	}
	return (max);
}

/*Forget the min number from B*/

int	nb_minb(t_stack *stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack->b[0];
	while (i <= stack->size_b)
	{
		if (min > stack->b[i])
			min = stack->b[i];
		i++;
	}
	return (min);
}

/*Push the 3 smallest number to B*/

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