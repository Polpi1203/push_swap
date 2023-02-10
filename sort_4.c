/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:14:54 by polpi             #+#    #+#             */
/*   Updated: 2023/02/10 19:16:45 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_4(t_stack *stack)
{
    little_3_nb(stack);
	pushk_to_b(stack);
	stack->size_b--;
	func_35(stack);
	func_pa(stack);
	func_pa(stack);
	func_pa(stack);
	free (stack->k);
}