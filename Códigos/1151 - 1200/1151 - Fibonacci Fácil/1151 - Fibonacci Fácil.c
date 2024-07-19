#include <stdio.h>


int main()
{

    int n, fib, aux = 1, aux2 = 0, i = 3;

    scanf("%i", &n);

    if (n < 3)
    {
        if (n == 2) printf("0 1\n");
        else  printf("0\n");
    } else
    {
        printf("0 1");

       while (i <= n)
        {

        fib = aux+aux2;
        aux2 = aux;
        aux = fib;
        printf(" %i", fib);
        i++;
        }
    }
    printf("\n");

	return 0;
}