#include <stdio.h>
#include <stdlib.h>

int crescente(a,b)
{
    int  c, soma = 0;

    if (a >= b){

        for (c = b; c <= a; c++){
            soma = soma + c;
            printf("%d ", c);
        }

        printf("Sum=%d\n", soma);

    } else {

        for (c = a; c <= b; c++){
            soma = soma + c;
            printf("%d ", c);
        }

        printf("Sum=%d\n", soma);

    }

    return 0;
}
int main()
{
    int m = 1, n = 1;

    while (m > 0 && n > 0){
        scanf("%d %d", &m, &n);
        if (m > 0 && n > 0){
        crescente(m,n);
        }
    }
    return 0;
}
