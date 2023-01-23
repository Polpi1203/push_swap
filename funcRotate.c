/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcRotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:23:50 by polpi             #+#    #+#             */
/*   Updated: 2023/01/23 19:48:08 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Manque les cas d'erreurs

void	func_ra(t_stack *stack)
{
	int	stock;
	int	i;

	stock = stack->a[0];
	i = -1;
	while (++i < stack->size_a)
		stack->a[i] = stack->a[i + 1];
	stack->a[i] = stock;
	stack->count++;
	ft_printf("ra\n");
}

void	func_rb(t_stack *stack)
{
	int	stock;
	int	i;

	stock = stack->b[0];
	i = -1;
	while (++i <= stack->size_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
	}
	stack->b[i] = stock;
	ft_printf("rb\n");
}

void	func_rr(t_stack *stack)
{
	func_ra(stack);
	func_rb(stack);
	ft_printf("rr\n");
}

/*
int main (void)
{
	int array_a[] = {1,2,3,4,5,6,7,8,9,12,13,14,15};
	int i = -1;

	func_ra(array_a, 12);

	while (i++ < 12)
		printf("%d,", array_a[i]);
}
*/