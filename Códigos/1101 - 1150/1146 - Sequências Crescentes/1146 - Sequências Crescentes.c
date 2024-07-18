#include <stdio.h>
#include <stdlib.h>

int sequencia(a)
{

    int i;

    for (i = 1; i < a; i++)
    {
        printf("%d ", i);
    }
    printf("%d\n",a);
    return 0;

}

int main()
{
    int x = 1;

    while (x != 0)
    {
        scanf("%d", &x);
        if (x != 0)
        {
            sequencia(x);
        }
    }

    return 0;
}
