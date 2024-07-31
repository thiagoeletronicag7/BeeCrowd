#include <stdio.h>

int rafael(int x, int y);

int beto(int x, int y);

int carlos(int x, int y);

int main()
{

    int N;
    int a, b;

    scanf("%i", &N);

    for(N; N > 0; N--)
    {
        scanf("%i %i", &a, &b);

        if(rafael(a,b) > beto(a,b) && rafael(a,b) > carlos(a,b)) printf("Rafael ganhou\n");
        else if(beto(a,b) > rafael(a,b) && beto(a,b) > carlos(a,b)) printf("Beto ganhou\n");
        else if(carlos(a,b) > rafael(a,b) && carlos(a,b) > beto(a,b)) printf("Carlos ganhou\n");
    }

	return 0;
}

int rafael(int x, int y)
{
    int funcao;

    funcao = (3*3*x*x)+y*y;

    return funcao;
}

int beto(int x, int y)
{
    int funcao;

    funcao = 2*x*x+5*5*y*y;

    return funcao;
}

int carlos(int x, int y)
{
    int funcao;

    funcao = -100*x+y*y*y;

    return funcao;
}
