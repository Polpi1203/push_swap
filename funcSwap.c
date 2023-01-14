/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcSwap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:43:54 by polpi             #+#    #+#             */
/*   Updated: 2023/01/14 11:07:21 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Manque les cas d'erreurs

int *func_sa(int array_a[])
{
    int a;

    a = array_a[0];
    array_a[0] = array_a[1];
    array_a[1] = a;
    ft_printf("sa\n");
    return(array_a);
}

int *func_sb(int array_b[])
{
    int a;

    a = array_b[0];
    array_b[0] = array_b[1];
    array_b[1] = a;
    ft_printf("sb\n");
    return(array_b);
}

void func_ss(int array_b[], int array_a[])
{
    func_sa(array_a);
    func_sb(array_b);
    ft_printf("ss\n");
}
/*
int main(void)
{
    int array_a[] = {2,1,3,4};
    int array_b[] = {2,1,3,4};
    int i = 0;

    func_ss(array_a, array_b);
    while (i != 4)
    {
        printf("%d", array_a[i]);
        i++;
    }
    printf("\n-----------------------\n");
    i = 0;
    while (i != 4)
    {
        printf("%d", array_b[i]);
        i++;        
    }
}*/