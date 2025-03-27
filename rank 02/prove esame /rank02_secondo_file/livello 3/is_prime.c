
#include <stdio.h>
#include <stdlib.h>
int is_prime(int nb)
{
    int i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nb = atoi(argv[1]);
        int i = 2;
        while (i <= nb)
        {
            if (is_prime(i) && nb % i == 0)
            {
                printf("%d", i);
                nb /= i;
                if (nb != 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}
