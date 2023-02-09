/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:29:08 by polpi             #+#    #+#             */
/*   Updated: 2023/02/09 21:42:47 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Normalizes the numbers before sort them*/

void	ft_normalizes(t_stack *stack)
{
	int	i;
	int	j;
	int	count;

	i = -1;
	while (++i <= stack->size_a)
		stack->inter[i] = stack->a[i];
	i = 0;
	while (i <= stack->size_a)
	{
		j = -1;
		count = -1;
		while (++j <= stack->size_a)
		{
			if (stack->inter[i] < stack->inter[j])
				count++;
		}
		stack->a[i] = (stack->size_a - count);
		i++;
	}
}

/*Malloc all*/

int def_value(t_stack *stack)
{
	stack->result = malloc(sizeof(char *) * (stack->size_a + 1));
	stack->a = malloc(sizeof(int) * (stack->size_a));
	stack->b = malloc(sizeof(int) * (stack->size_a));
	stack->inter = malloc(sizeof(int) * (stack->size_a));
	if (stack->a == NULL && stack->b == NULL && stack->result == NULL)
		return (0);
	return (0);
}

/*Creat the stack if there is only one argument*/

void	create_stack_str(t_stack *stack, char *str)
{
	int		index;

	index = -1;
	stack->result = ft_split(str, 32);
	while (stack->result[++index] != 0)
		stack->a[index] = ft_atoi(stack->result[index]);
	ft_normalizes(stack);
}

/*Creat the stack if there is several arguments*/

void	create_stack_arg(t_stack *stack, char **arg)
{
	int i;

	i = -1;
	while (++i <= stack->size_a)
		stack->a[i] = ft_atoi(arg[i + 1]);	
	ft_normalizes(stack);
}


void	print_arraya(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_a + 1)
		ft_printf("%d, ", stack->a[i]);
	write (1, "\n", 1);
}
/*
void	print_arrayb(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_b)
		ft_printf("%d, ", stack->b[i]);
	write (1, "\n", 1);
}

void	print_arrayk(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_a + 1)
		ft_printf("%d", stack->k[i]);
	write (1, "\n", 1);
}
*/