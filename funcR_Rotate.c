/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcR_Rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:43:04 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/12 14:43:46 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Move the last number to the first position*/

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
		stack->a[i] = stack->a[i - 1];
		stack->a[i - 1] = inter;
	}
	stack->count++;
	ft_printf("rra\n");
}

/*Move the last number to the first position*/

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
		stack->b[i] = stack->b[i - 1];
		stack->b[i - 1] = inter;
	}
	ft_printf("rrb\n");
}

/*Use rra and rrb in same time*/

void	func_rrr(t_stack *stack)
{
	func_rra(stack);
	func_rrb(stack);
	ft_printf("rrr\n");
}
