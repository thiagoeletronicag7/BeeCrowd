#include <stdio.h>


int main()
{
    int N[20], aux[20], i, j;

    for(i = 0; i < 20; i++)
    {
        scanf("%i", &N[i]);
    }

    for(i = 0, j = 19; i < 20; i++, j--)
    {
        aux[i] = N[j];
        printf("N[%i] = %i\n", i, aux[i]);
    }

	return 0;
}
