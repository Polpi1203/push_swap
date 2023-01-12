
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
    // start algo
    int size = count_space(av[1]);
    int min = forget_min(a, size + 1);
    int max = forget_max(a, size + 1);

    printf("size : %d\n",size);
    printf("a[size] : %d\n",a[size]);
    printf("max : %d\nmin : %d\n", max, min);
    while (a[0] != min || a[size] != max)
    {
        if (a[0] > a[1] && a[0] != max)
           a = func_sa(a);
        a = func_ra(a, size + 1);
        index = -1;
    }
    while (++index < count_space(av[1]) + 1)
        printf("%d,", a[index]);
    printf("\n");
    // test ( print array a)

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
