/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcRotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:23:50 by polpi             #+#    #+#             */
/*   Updated: 2023/02/15 16:11:13 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Move the first number from a to the last position*/

void	func_ra(t_stack *stack)
{
	int	stock;
	int	i;

	stock = stack->a[0];
	i = -1;
	while (++i < stack->size_a - 1)
		stack->a[i] = stack->a[i + 1];
	stack->a[i] = stock;
	stack->count++;
	ft_printf("ra\n");
}

/*Move the first number from B to the last position*/

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

/*Use ra and rb in the same time*/

void	func_rr(t_stack *stack)
{
	func_ra(stack);
	func_rb(stack);
	ft_printf("rr\n");
}
