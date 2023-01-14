/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:38:14 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/14 11:20:29 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *func_3(int a[], int size)
{
    if(a[size] == 1 && a[0] == 2)
        a = func_rra(a, size);
    else if (a[size] == 1 && a[0] == 3)
    {
        a = func_sa(a);
        a = func_rra(a, size);
    }
    else if (a[size] == 2 && a[0] == 1)
    {
        a = func_sa(a);
        a = func_ra(a, size);
    }
    else if(a[size] == 2 && a[0] == 3)
        a = func_ra(a, size);
    else if(a[size] == 3 && a[0] == 2)
        a = func_sa(a);
    return (a);
}