#include <stdio.h>

long int fatorial(int x);

int numDigitos(int num);

int main()
{
    int a = -1, cont, aux, soma, valor[5], i, auxFatorial[5], contFatorial;

    while(a)
    {
        scanf("%i", &a);

		if (a == 0) break;

        cont = numDigitos(a);

        for(i = 0; i <= 4; i++) valor[i] = 0;

        soma = 0;

        if(a > 9999)
        {
            valor[0] = a/10000;
            a = a - valor[0]*10000;
        }
        if (a > 999)
        {
            valor[1] = a/1000;
            a = a - valor[1]*1000;
        }
        if (a > 99)
        {
            valor[2] = a/100;
            a = a - valor[2]*100;
        }
        if (a > 9)
        {
            valor[3] = a/10;
            a = a - valor[3]*10;
        }

        valor[4] = a;
		a = -1;

		for(i = 0; i <= 4; i++)
		{
			if(valor[i] == 0) contFatorial = i;
			else
			{
			contFatorial = i;
			break;
			}
		}



        for(cont, contFatorial; cont > 0; cont--, contFatorial++)
        {
            soma += valor[contFatorial]*fatorial(cont);
        }

        printf("%i\n", soma);

    }

	return 0;
}


int numDigitos(int num)
{
    int i, aux;

    for(i = 0; num > 0; i++)
        {
            num /= 10;
        }

    return i;
}

long int fatorial(int x)
{

    if (x <= 1) return 1;
    else return (x *  fatorial(x-1));

}
