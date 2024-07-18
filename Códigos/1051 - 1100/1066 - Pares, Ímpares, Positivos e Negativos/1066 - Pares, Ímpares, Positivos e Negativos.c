#include <stdio.h>


int main()
{

    int num, par = 0, impar = 0, pos = 0, neg = 0, i;

    for(i = 0; i < 5; i++)
    {
        scanf("%i", &num);
        if (num%2 == 0) par++;
        else impar++;
        if (num > 0) pos++;
        else if (num < 0) neg++;
    }

    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar, pos, neg);

	return 0;
}
