/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:19 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/15 16:12:14 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**change_av(char **av)
{
	av = ft_split(av[1], ' ');
	return (av);
}

int	size_and_error(int ac, char **av)
{
	if (check_error(ac, av) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		if (ac == 2)
			free_av(av);
		return (0);
	}
	if (check_duplicate(ac, av) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		if (ac == 2)
			free_av(av);
		return (0);
	}
	return (1);
}

void	choose_algo(t_stack *stack)
{
	if (stack->size_a == 2)
		sort_2(stack);
	else if (stack->size_a == 3)
		sort_3_nbr(stack);
	else if (stack->size_a == 4)
		sort_4(stack);
	else if (stack->size_a == 5)
		sort_5_nbr(stack);
	else if (stack->size_a > 5)
		big_func(stack);
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac == 1 || av[1][0] == '\0')
		return (0);
	if (ac == 2)
		av = change_av(av);
	if (size_and_error(ac, av) == 0)
		return (0);
	stack.size_a = size_a(av, ac);
	def_value(&stack);
	create_stack(&stack, av, ac);
	ft_normalizes(&stack);
	if (sorted_list(&stack) == 1)
	{
		if (ac == 2)
			free_av(av);
		free (stack.a);
		free (stack.b);
		return (0);
	}
	stack.min = nb_min(&stack);
	stack.max = nb_max(&stack);
	choose_algo(&stack);
	if (ac == 2)
		free_av(av);
	free (stack.a);
	free (stack.b);
}
