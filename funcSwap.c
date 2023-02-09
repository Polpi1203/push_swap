/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcSwap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:43:54 by polpi             #+#    #+#             */
/*   Updated: 2023/02/09 18:21:38 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Swap the the first with the second number from stack a*/

void	func_sa(t_stack *stack)
{
	int	a;

	a = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = a;
	ft_printf("sa\n");
}

/*Swap the first with the second number from stack b*/

void	func_sb(t_stack *stack)
{
	int	a;

	a = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = a;
	ft_printf("sb\n");
}

/*Use sb and sa in the same time*/

void	func_ss(t_stack *stack)
{
	func_sa(stack);
	func_sb(stack);
	ft_printf("ss\n");
}
