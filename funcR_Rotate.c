/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcR_Rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:43:04 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/18 11:36:26 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func_rra(t_stack *stack)
{
	int	i;
	int	stock_first;
	int	inter;

	i = stack->size_a + 1;
	stock_first = stack->a[0];
	stack->a[0] = stack->a[stack->size_a];
	stack->a[stack->size_a] = stock_first;
	while (--i != 1)
	{
		inter = stack->a[i];
		stack->a[i] = stack->a[i-1];
		stack->a[i-1] = inter;
	}
	ft_printf("rra\n");
}

void	func_rrb(t_stack *stack)
{
	int	i;
	int	stock_first;
	int	inter;

	i = stack->size_b + 1;
	stock_first = stack->b[0];
	stack->b[0] = stack->b[stack->size_b];
	stack->b[stack->size_b] = stock_first;
	while (--i != 1)
	{
		inter = stack->b[i];
		stack->b[i] = stack->b[i-1];
		stack->b[i-1] = inter;
	}
	ft_printf("rrb\n");
}

void	func_rrr(t_stack *stack)
{
	func_rra(stack);
	func_rrb(stack);
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