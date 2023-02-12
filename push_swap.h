/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:01 by afaucher          #+#    #+#             */
/*   Updated: 2023/02/12 13:59:33 by polpi            ###   ########.fr       */
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
	int		*inter;
	int		size_a;
	int		size_b;
	int		min;
	int		max;
	int 	count;
}	t_stack;

int		sizeA(char **av);
int		sizeA_arg_one(char **av);
int		nb_max(t_stack *stack);
int		nb_min(t_stack *stack);	
void	little_3_nb(t_stack *stack, int nb);
int 	def_value(t_stack *stack);
void	create_stack(t_stack *stack, char **arg, int ac);
void	ft_normalizes(t_stack *stack);
void	print_arraya(t_stack *stack);
void	print_arrayb(t_stack *stack);
void	print_arrayk(t_stack *stack);

int check_error(int ac, char *av[]);
int	check_duplicate(int ac, char *av[]);
int	ft_check_int(char *str);
int	ft_check_sign(char *str);
int	free_av(char *argv[]);
long	ft_atol(const char *str);

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

void	sort_3_nbr(t_stack *stack);
int	sort_4(t_stack *stack);
int	sort_5_nbr(t_stack *stack);
void	func_35(t_stack *stack);
void	big_func(t_stack *stack);
int		sorted_list(t_stack *stack);


#endif