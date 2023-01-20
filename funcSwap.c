/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcSwap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:43:54 by polpi             #+#    #+#             */
/*   Updated: 2023/01/20 14:33:29 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Manque les cas d'erreurs

void	func_sa(t_stack *stack)
{
	int	a;

	a = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = a;
	ft_printf("sa\n");
}

void	func_sb(t_stack *stack)
{
	int	a;

	a = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = a;
	ft_printf("sb\n");
}

void	func_ss(t_stack *stack)
{
	func_sa(stack);
	func_sb(stack);
	ft_printf("ss\n");
}
/*
int main(void)
{
	int array_a[] = {2,1,3,4};
	int array_b[] = {2,1,3,4};
	int i = 0;

	func_ss(array_a, array_b);
	while (i != 4)
	{
		printf("%d", array_a[i]);
		i++;
	}
	printf("\n-----------------------\n");
	i = 0;
	while (i != 4)
	{
		printf("%d", array_b[i]);
		i++;        
	}
}*/