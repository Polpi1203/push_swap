/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:01 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/26 11:18:23 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

# include "ft_printf/ft_printf.h"
# include "ft_printf/libft/libft.h"

typedef struct s_stack
{
	int		*a;
	char	**result;
	int		*b;
	int		*k;
	int		size_a;
	int		size_b;
	int		min;
	int		max;
	int 	count;
}	t_stack;

int		size_str(char *str);
int		nb_max(t_stack stack);
int		nb_min(t_stack stack);	
void	little_3_nb(t_stack *stack);
int 	def_value(t_stack *stack);
void	create_stack_str(t_stack *stack, char *str);
void	create_stack_arg(t_stack *stack, char **arg);
void	print_arraya(t_stack *stack);
void	print_arrayb(t_stack *stack);
void	print_arrayk(t_stack *stack);

int		nb_minb(t_stack *stack);
int		nb_maxb(t_stack *stack);
void	pushk_to_b(t_stack *stack);

void	func_sa(t_stack *stack);
void	func_sb(t_stack *stack);
void 	func_ss(t_stack *stack);

void	func_ra(t_stack *stack);
void	func_rb(t_stack *stack);
void	func_rr(t_stack *stack);

void	func_rra(t_stack *stack);
void	func_rrb(t_stack *stack);
void	func_rrr(t_stack *stack);

void	func_pb(t_stack *stack);
void	func_pa(t_stack *stack);

void	func_3(t_stack *stack);
void	func_5(t_stack *stack);
void	func_35(t_stack *stack);
void	big_func(t_stack *stack);
int		sorted_list(t_stack *stack);


#endif