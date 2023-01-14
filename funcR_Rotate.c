/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcR_Rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:43:04 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/14 11:07:03 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *func_rra(int a[], int size)
{
	int	i;
	int	stock_first;
	int	inter;

	i = size+1;
	stock_first = a[0];
	a[0] = a[size];
	a[size] = stock_first;
	while (--i != 1)
	{
		inter = a[i];
		a[i] = a[i-1];
		a[i-1] = inter;
	}
	ft_printf("rra\n");
	return (a);
}

int *func_rrb(int b[], int size)
{
	int	i;
	int	stock_first;
	int	inter;

	i = size+1;
	stock_first = b[0];
	b[0] = b[size];
	b[size] = stock_first;
	while (--i != 1)
	{
		inter = b[i];
		b[i] = b[i-1];
		b[i-1] = inter;
	}
	ft_printf("rrb\n");
	return (b);
}

void	func_rrr(int a[], int b[], int size)
{
	func_rra(a, size);
	func_rrb(b, size);
	ft_printf("rrr\n");
}

/*
int main(void)
{
	int	test[] = {4,8,2};

	func_rra(test, 2);

	int i = -1;
	while (++i < 3)
	{
		printf("%d-", test[i]);
	}
}
*/