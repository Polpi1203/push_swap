/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:19 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/10 17:21:11 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av) 
{
	t_stack stack;
	if (ac == 1 || av[1][0] == '\0')
		return (0);
	stack.size_a = sizeA(av);
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		stack.size_a = sizeA_arg_one(av);
	}
	if(check_error(ac, av) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		if (ac == 2)
			free_av(av);
		return (0);
	}
	def_value(&stack);
	create_stack(&stack, av, ac);
	ft_normalizes(&stack);
	stack.min = nb_min(&stack);
	stack.max = nb_max(&stack);
	if(check_duplicate(&stack) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		free (stack.a);
		free (stack.b);
		if (ac == 2)
			free_av(av);
		return (0);
	}
	if (stack.size_a == 2)
		sort_3_nbr(&stack);
	else if (stack.size_a > 2 && stack.size_a < 5)
		sort_5_nbr(&stack);
	else if (stack.size_a > 4)
		big_func(&stack);
	if (ac == 2)
		free_av(av);
	free (stack.a);
	free (stack.b);
}
