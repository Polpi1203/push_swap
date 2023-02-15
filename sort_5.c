/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:55 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/15 16:29:49 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Sort list for 5 nbr*/
int	sort_5_nbr(t_stack *stack)
{
	little_3_nb(stack, 5);
	pushk_to_b(stack);
	func_35(stack);
	if (stack->a[0] > stack->a[1])
		func_sa(stack);
	func_pa(stack);
	func_pa(stack);
	func_pa(stack);
	free (stack->k);
	return (1);
}
