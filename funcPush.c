/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcPush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:25:04 by afaucher          #+#    #+#             */
/*   Updated: 2023/01/13 13:36:56 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// int	*ft_strjoin(int a[], int b[])
// {
// 	char	*result;
// 	int		i;
// 	int		j;
// 	int		len_real;

// 	i = 0;
// 	j = 0;
// 	len_real = (ft_strlen(s1) + ft_strlen(s2));
// 	result = (char *)malloc(sizeof (char) * (len_real + 1));
// 	if (result == NULL)
// 		return (NULL);
// 	while (s1[i] != '\0')
// 	{
// 		result[i] = s1[i];
// 		i++;
// 	}
// 	while (s2[j] != '\0')
// 	{
// 		result[i] = s2[j];
// 		i++;
// 		j++;
// 	}
// 	result[i] = '\0';
// 	return (result);
// }

// pa (push a) : Prend le premier élément au sommet de b et le met sur a. Ne fait rien si b est vide. 

void    func_pa(int a[], int b[])
{
    int i;

    i = -1;
    while (++i < size - 1)
    {
        a[i] = b[i + 1];
    }
    b[0] = a[0];
}
