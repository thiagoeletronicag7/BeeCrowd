#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, compare=0, i, pos;

    for(i=0; i<100; i++){

        scanf("%d", &n);

        if (n >= compare){
            compare=n;
            pos = i;
            pos++;
        }
    }

    printf("%d\n%d\n", compare, pos);

    return 0;
}
