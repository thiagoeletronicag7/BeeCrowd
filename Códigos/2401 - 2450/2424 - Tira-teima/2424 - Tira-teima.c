#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if ((x >= 0) && (y >= 0)){
        if ((x <= 432) && (y <= 468)){
            printf("dentro\n");
        } else printf("fora\n");
    } else printf("fora\n");
    return 0;
}
