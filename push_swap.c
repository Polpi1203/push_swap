
#include "push_swap.h"

int main(int ac, char **av)
{
    int *a;
    int *b;
    int index;

    a = NULL;
    b = NULL;
    index = -1;
    if (ac == 2)
    {
        //char	**ft_split(char const *s, char c)
        char    **result;

        result = malloc(sizeof(char *) * count_space(av[1] + 1));
        if (result == NULL)
            return (0);
        a = malloc(sizeof(int) * (count_space(av[1]) + 1));
        if (a == NULL)
            return (0);
        result = ft_split(av[1], 32); // Give the string and separator
        while (result[++index] != 0)
            a[index] = ft_atoi(result[index]);
    }
    printf("%d", forget_min(a));
    // start algo
    int i = 0;
    int size = count_space(av[1]);
    int min = forget_min(a);
    int max = forget_max(a);
    while (a[0] != min && a[size + 1] != max)
    {
        if (a[i] > a[i+1] && a[i] != max)
           a = func_sa(a);
        a = func_ra(a, size);
        i++;
    }
    // test ( print array a)
    index = -1;
    while (++index < count_space(av[1]) + 1)
        printf("%d\n", a[index]);

    if (ac > 2)
    {
        a = malloc(sizeof(int) * (ac - 1));
        if (a == NULL)
            return (0);
        while (++index < (ac - 1))
            a[index] = ft_atoi(av[index + 1]);
    }
}

/*
while (nb[0] != min && nb[end] != max)
    if (nb > nb+1 && nb != max)
        swap
    rotate
*/
