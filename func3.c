/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:38:14 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/18 14:06:57 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    func_3(t_stack *stack)
{
    if(stack->a[stack->size_a] == stack->min && stack->a[1] == stack->max)
        func_rra(stack);
    else if (stack->a[stack->size_a] == stack->min && stack->a[0] == stack->max)
    {
        func_sa(stack);
        func_rra(stack);
    }
    else if (stack->a[1] == stack->max && stack->a[0] == stack->min)
    {
        func_sa(stack);
        func_ra(stack);
    }
    else if(stack->a[1] == stack->min && stack->a[0] == stack->max)
        func_ra(stack);
    else if(stack->a[stack->size_a] == stack->max && stack->a[1] == stack->min)
        func_sa(stack);
}