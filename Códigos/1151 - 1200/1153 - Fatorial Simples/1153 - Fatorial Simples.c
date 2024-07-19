#include <stdio.h>

long int fatorial(int x)
{
    if (x <= 1) return 1;
    else return (x * fatorial(x-1));
}

int main()
{
    int N;
    scanf("%i", &N);

    printf("%i\n", fatorial(N));
    return 0;
}