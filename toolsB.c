/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolsB.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:07:45 by polpi             #+#    #+#             */
/*   Updated: 2023/01/20 14:05:21 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nb_maxB(t_stack *stack)
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

int	nb_minB(t_stack *stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack->b[0];
	while (i <= stack->size_b - 1)
	{
		if (min > stack->b[i])
			min = stack->b[i];
		i++;
	}
	return (min);
}