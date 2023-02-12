/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:14:54 by polpi             #+#    #+#             */
/*   Updated: 2023/02/12 13:58:34 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    sort_4(t_stack *stack)
{
    if (sorted_list(stack) == 1)
        return (0);
    little_3_nb(stack, 4);
	pushk_to_b(stack);
	stack->size_b--;
	func_35(stack);
	func_pa(stack);
	func_pa(stack);
	func_pa(stack);
	free (stack->k);
    return (1);
}