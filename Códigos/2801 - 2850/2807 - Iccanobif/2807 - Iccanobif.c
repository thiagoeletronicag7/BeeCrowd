#include <stdio.h>


int main()
{

    long int fibonacci[40];
    int i, N, aux;

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(i = 2; i <= 40; i++)
    {
     fibonacci[i] =  fibonacci[i-1] + fibonacci[i-2];
    }

    scanf("%i", &N);

    printf("%li", fibonacci[N]);

    aux = N-1;

    for(aux; aux > 0; aux--) printf(" %li", fibonacci[aux]);

    printf("\n");

	return 0;
}
