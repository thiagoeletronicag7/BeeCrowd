#include <stdio.h>


long int fatorial(int x)
{
    if (x <= 1) return 1;
    else return (x *  fatorial(x-1));

}

int main()
{
    long int aux = 0, N, guardaFatorial[8];
    int i;

    for(i = 0; i <= 8; i++)
    {
        guardaFatorial[i] = fatorial(i);
    }

    scanf("%i", &N);

    for(i = 8; i >= 0; i--)
    {
        aux += N/guardaFatorial[i];
        N = N%guardaFatorial[i];
    }
    printf("%i\n", aux);
	return 0;
}