/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:19 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/10 13:58:22 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack stack;
	if (ac == 1)
		return (0);
	if(check_error(ac, av) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (ac == 2)
	{
		stack.size_a = size_str(av[1]);
		def_value(&stack);
		create_stack_str(&stack, av[1]);
	}
	else if (ac > 2)
	{
		stack.size_a = ac - 2;
		def_value(&stack);
		create_stack_arg(&stack, av);
	}
	stack.min = nb_min(&stack);
	stack.max = nb_max(&stack);
	if(check_duplicate(&stack) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (stack.size_a == 2)
		sort_3_nbr(&stack);
	else if (stack.size_a == 4)
		sort_5_nbr(&stack);
	else if (stack.size_a > 4)
	{
		big_func(&stack);
		print_arraya(&stack);
	}
	free (stack.a);
	free (stack.b);
}



