/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:29:08 by polpi             #+#    #+#             */
/*   Updated: 2023/01/20 11:32:08 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_arrayA(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_a + 1)
		ft_printf("%d", stack->a[i]);
	write (1, "\n", 1);
}

void	print_arrayB(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_b + 1)
		ft_printf("%d", stack->b[i]);
	write (1, "\n", 1);
}

void	print_arrayK(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_a + 1)
		ft_printf("%d", stack->k[i]);
	write (1, "\n", 1);
}