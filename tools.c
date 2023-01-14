/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:52:35 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/14 10:40:21 by afaucher         ###   ########.fr       */
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

int	nb_max(int a[], int size)
{
	int	i;
	int	max;

	i = 0;
	max = a[0];
	while (i != size)
	{
		if (a[i] > max)
			max = a[i];
		i++;
	}
	return (max);
}

int	nb_min(int a[], int size)
{
	int	i;
	int	min;

	i = 0;
	min = a[0];
	while (i != size)
	{
		if (min > a[i])
			min = a[i];
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
}
/*
int main(void)
{
	char	*str = "Je vais a la piscine";

	printf("%d", count_space(str));
}
*/