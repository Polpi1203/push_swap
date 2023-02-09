/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolsA.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:52:35 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/09 18:25:07 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*forget the number of number for one argument*/

int	size_str(char *str)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] == 32)
			count++;
	}
	return (count);
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

void	little_3_nb(t_stack *stack)
{	
	int	i;
	int	j;
	int	a;

	i = -1;
	stack->k = malloc(sizeof(int) * stack->size_a);
	while (++i < 5)
		stack->k[i] = stack->a[i];
	j = -1;
	while (++j < 5)
	{
		i = -1;
		while (++i < 4)
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

/*
int main(void)
{
	char	*str = "Je vais a la piscine";

	printf("%d", count_space(str));
}
*/