/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:52:35 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/12 13:48:01 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_space(char *str)
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

int	forget_max(int a[])
{
	int	i;
	int	max;

	i = -1;
	max = 0;
	while (a[++i])
	{
		if (a[i] > max)
			max = a[i];
	}
	return (max);
}

int	forget_min(int a[])
{
	int	i;
	int	min;

	i = -1;
	min = a[0];
	while (a[++i])
	{
		if (min > a[i])
			min = a[i];
	}
	return (min);
}

/*
int main(void)
{
	char	*str = "Je vais a la piscine";

	printf("%d", count_space(str));
}
*/