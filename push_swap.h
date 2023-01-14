
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

# include "ft_printf/ft_printf.h"
# include "ft_printf/libft/libft.h"

int		*func_sa(int array_a[]);
int		*func_sb(int array_b[]);
void	func_ss(int array_b[], int array_a[]);
int		*func_ra(int array_a[], int size);
int		*func_rb(int array_b[], int size);
void	func_rr(int array_a[], int array_b[], int size);
int     count_space(char *str);
int	    forget_max(int a[], int size);
int	    forget_min(int a[], int size);
int     *func_rra(int a[], int size);
int     *func_rrb(int b[], int size);
void	func_rrr(int a[], int b, int size);

#endif