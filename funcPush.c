/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcPush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:25:04 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/23 19:48:33 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func_pb(t_stack *stack)
{
	int	inter;
	int	i;

	i = -1;
	inter = stack->a[0];
	stack->size_a--;
	stack->size_b++;
	while (++i <= stack->size_a)
		stack->a[i] = stack->a[i + 1];
	i = stack->size_b - 1;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = inter;
	stack->count++;
	ft_printf("pb\n");
}

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
