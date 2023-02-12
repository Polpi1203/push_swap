/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolsA.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:52:35 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/12 10:06:28 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*forget the number of number for > 1 arguments*/

int	sizeA(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i - 2);
}

/*forget the number of number for 1 arguments*/

int	sizeA_arg_one(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i - 1);
}

/*Forget the max number*/

int	nb_max(t_stack *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack->a[0];
	while (i <= stack->size_a)
	{
		if (stack->a[i] > max)
			max = stack->a[i];
		i++;
	}
	return (max);
}

/*Forget the min number*/

int	nb_min(t_stack *stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack->a[0];
	while (i <= stack->size_a)
	{
		if (min > stack->a[i])
			min = stack->a[i];
		i++;
	}
	return (min);
}

/*Put the 3 smallest number at the beginning to K*/

void	little_3_nb(t_stack *stack, int nb)
{	
	int	i;
	int	j;
	int	a;

	i = -1;
	stack->k = malloc(sizeof(int) * stack->size_a);
	while (++i < nb)
		stack->k[i] = stack->a[i];
	j = -1;
	while (++j < nb)
	{
		i = -1;
		while (++i < nb-1)
		{
			if (stack->k[i] > stack->k[i + 1])
			{
				a = stack->k[i];
				stack->k[i] = stack->k[i + 1];
				stack->k[i + 1] = a;
			}
		}
	}	
}
