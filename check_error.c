/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:47:55 by polpi             #+#    #+#             */
/*   Updated: 2023/02/10 13:57:22 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Check all error case*/
int check_error(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	if (ac == 2)
		i = 0;
	while (av[i])
	{
		j = 0;
		if (ft_check_sign(av[i]) == 1)
			j++;
		if (av[i][j] == '\0')
			return (0);
		while (av[i][j] != '\0')
		{
			if (ft_isdigit(av[i][j]) == 0)
				return (0);
			j++;
		}
		if (ft_check_int(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*Check if there is a duplicate in stack A*/

int	check_duplicate(t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= stack->size_a)
	{
		j = i + 1;
		while (j <= stack->size_a)
		{	
			if (stack->a[i] == stack->a[j])
				return (0);
			j++;
		}	
	}
	return (1);
}

/*Check if all numbers are int*/

int	ft_check_int(char *str)
{
	long	nb;

	nb = ft_atol(str);
	if (nb > 2147483647 || nb < -2147483648)
		return (0);
	return (1);
}

/*Check if there are more than one sign "-" or "+" before a number*/

int	ft_check_sign(char *str)
{
	if (str[0] == '-' || str[0] == '+')
		return (1);
	return (0);
}