/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcSwap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:43:54 by polpi             #+#    #+#             */
/*   Updated: 2023/01/08 16:42:22 by polpi            ###   ########.fr       */
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
    return(array_a);
}

int *func_sb(int array_b[])
{
    int a;

    a = array_b[0];
    array_b[0] = array_b[1];
    array_b[1] = a;
    return(array_b);
}

void func_ss(int array_b[], int array_a[])
{
    func_sa(array_a);
    func_sb(array_b);
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