/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcRotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:23:50 by polpi             #+#    #+#             */
/*   Updated: 2023/01/12 15:11:20 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Manque les cas d'erreurs

int *func_ra(int array_a[], int size)
{
	int stock;
	int i;

	stock = array_a[0];
	i = -1;
	while (++i < size - 1)
		array_a[i] = array_a[i+1];
	array_a[i] = stock;
	ft_printf("ra\n");
	return (array_a);
}

int *func_rb(int array_b[], int size)
{
	int stock;
	int i;

	stock = array_b[0];
	i = -1;
	while (++i < size - 1)
		array_b[i] = array_b[i+1];
	array_b[i] = stock;
	return (array_b);
}

void    func_rr(int array_a[], int array_b[], int size)
{
	func_ra(array_a, size);
	func_rb(array_b, size);
}

/*
int main (void)
{
	int array_a[] = {1,2,3,4};
	int i = -1;

	func_pa(array_a, 3);

	while (i++ < 3)
		printf("%d", array_a[i]);
}
*/