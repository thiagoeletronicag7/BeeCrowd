#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, pares, i, quadrado;
    scanf("%d", &n);
    for (i=1; i<=n; i++){

        if (i%2 == 0){
        pares = i;
        quadrado = pares*pares;
        printf("%d^2 = %d\n", pares, quadrado);
    }
        
    }
    return 0;
}
