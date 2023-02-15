/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:06:23 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/15 14:09:40 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_2(t_stack *stack)
{
    if (sorted_list(stack) == 1)
		return (0);
    if (stack->a[0] > stack->a[1])
        func_sa(stack);
    return (1);
}