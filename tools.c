/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:52:35 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/18 11:36:05 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int size_str(char *str)
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

int	nb_max(t_stack stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack.a[0];
	while (i != stack.size_a)
	{
		if (stack.a[i] > max)
			max = stack.a[i];
		i++;
	}
	return (max);
}

int	nb_min(t_stack stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack.a[0];
	while (i != stack.size_a)
	{
		if (min > stack.a[i])
			min = stack.a[i];
		i++;
	}
	return (min);
}

void	print_array(int array[], int size)
{
	int	i;

	i = -1;
	while (++i < size + 1)
		ft_printf("%d", array[i]);
	write (1, "\n", 1);
}
/*
int main(void)
{
	char	*str = "Je vais a la piscine";

	printf("%d", count_space(str));
}
*/