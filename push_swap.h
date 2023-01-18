/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:01 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/18 14:07:09 by afaucher         ###   ########.fr       */
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
	int *a;
	int *b;
	int size_a;
	int size_b;
	int	min;
	int	max;
}	t_stack;

int		size_str(char *str);
int		nb_max(t_stack stack);
int		nb_min(t_stack stack);	
void	print_array(int array[], int size);

void    func_sa(t_stack *stack);
void    func_sb(t_stack *stack);
void 	func_ss(t_stack *stack);

void	func_ra(t_stack *stack);
void	func_rb(t_stack *stack);
void	func_rr(t_stack *stack);

void	func_rra(t_stack *stack);
void	func_rrb(t_stack *stack);
void	func_rrr(t_stack *stack);

void	func_pb(t_stack *stack);
void	func_pa(t_stack *stack);

void    func_3(t_stack *stack);
void	func_5(t_stack *stack);


#endif