#include <stdio.h>

int calls = 0;

long int fibonacci(int x);

int main()
{
    int testes, n; //n eh o digito da sequencia que sera pedido pelo usuario

    scanf("%i", &testes);

    while (testes > 0)
    {
        scanf("%i", &n);
        printf("fib(%i) = %i calls = %li\n", n, calls - 1, fibonacci(n));
        testes--;
        calls = 0;
    }

	return 0;
}

long int fibonacci (int x)
{

    calls++;

    if (x == 0 | x == 1) return x;

    else return fibonacci(x - 1) + fibonacci(x - 2);

}
