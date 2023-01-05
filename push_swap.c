
// recuperer les donnees dans un tableau

int main(int ac, char **av)
{
    int a[];
    int b[];
    int index;

    index = 0;
    // Si les nombre son dans une seule chaine de caractere
    if (ac == 2)
    {

    }
    // Si les nombres sans separe en plusieurs arguments
    if (ac > 2)
    {
        a = malloc(sizeof(int) * (ac - 1));
        if (a == NULL)
            return (NULL);
        while (index < (ac - 1))
        {
            
        }
    }
}