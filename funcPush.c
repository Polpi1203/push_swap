/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcPush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:25:04 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/15 16:02:02 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Push the first number from a to b*/

void	func_pb(t_stack *stack)
{
	int	inter;
	int	i;

	i = -1;
	inter = stack->a[0];
	stack->size_a--;
	stack->size_b++;
	while (++i < stack->size_a)
		stack->a[i] = stack->a[i + 1];
	i = stack->size_b;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = inter;
	stack->count++;
	ft_printf("pb\n");
}

/*push the first number from b to a*/

void	func_pa(t_stack *stack)
{
	int	inter;
	int	i;

	i = 0;
	inter = stack->b[0];
	stack->size_b--;
	stack->size_a++;
	while (i <= stack->size_b)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	i = stack->size_a;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = inter;
	ft_printf("pa\n");
}
