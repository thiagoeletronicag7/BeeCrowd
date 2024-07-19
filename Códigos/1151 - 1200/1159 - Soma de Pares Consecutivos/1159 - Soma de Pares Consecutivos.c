#include <stdio.h>
#include <stdlib.h>

int par(a)
{
    int i, soma = 0;
    if (a%2 == 0)
    {
        for (i = 0; i < 5; i++)
        {
            soma = soma + a;
            a += 2;
        }
    } else
    {
        a++;
        for (i = 0; i < 5; i++)
        {
            soma = soma + a;
            a += 2;
        }
    }

    printf("%d\n", soma);

    return soma;
}

int main()
{
    int x = 1;

    while (x != 0)
    {
        scanf("%d", &x);
        if (x != 0)
        {
            par(x);
        } else {};
    }
    return 0;
}
