/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:29:08 by polpi             #+#    #+#             */
/*   Updated: 2023/02/12 14:00:28 by polpi            ###   ########.fr       */
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
	free (stack->inter);
}

/*Malloc all*/

int def_value(t_stack *stack)
{
	stack->a = malloc(sizeof(int) * (stack->size_a));
	stack->b = malloc(sizeof(int) * (stack->size_a));
	stack->inter = malloc(sizeof(int) * (stack->size_a));
	if (stack->a == NULL && stack->b == NULL && stack->result == NULL)
		return (0);
	return (0);
}

/*Creat the stack*/

void	create_stack(t_stack *stack, char **arg, int ac)
{
	int i;

	i = -1;
	if (ac == 2)
	{
		while (++i <= stack->size_a)
		{
			stack->a[i] = ft_atoi(arg[i]);
		}
	}
	else
		while (++i <= stack->size_a)
			stack->a[i] = ft_atoi(arg[i+1]);
}

/*Atoi but with long -> AtoL*/

long	ft_atol(const char *str)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = ((nb * 10) + (str[i] - 48));
		i++;
	}
	nb = nb * sign;
	return (nb);
}


void	print_arraya(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_a + 1)
		ft_printf("%d, ", stack->a[i]);
	write (1, "\n", 1);
}

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
