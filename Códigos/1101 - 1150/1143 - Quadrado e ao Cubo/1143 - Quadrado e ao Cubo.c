#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, quadrado, cubo;
    scanf("%d", &n);
    for (i=1; i<=n; i++){

        quadrado = i*i;
        cubo = i*i*i;
        printf("%d %d %d\n", i, quadrado, cubo);
    }

    return 0;
}
