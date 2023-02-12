/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:55 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/12 14:38:30 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Sort list for 5 nbr*/
int	sort_5_nbr(t_stack *stack)
{
	if (sorted_list(stack) == 1)
		return (0);
	little_3_nb(stack, 5);
	pushk_to_b(stack);
	stack->size_b--;
	func_35(stack);
	if (stack->a[0] > stack->a[1])
		func_sa(stack);
	func_pa(stack);
	func_pa(stack);
	func_pa(stack);
	free (stack->k);
	return (1);
}
