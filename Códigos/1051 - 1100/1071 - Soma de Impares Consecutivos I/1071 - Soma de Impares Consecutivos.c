#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma = 0;

    scanf("%d %d", &x, &y);

    if (x > y){
        for (y++; y < x; y++){
            if(y%2 == 0){
            } else {
            soma += y;
            }
        }
    }
    if (y > x){
        for (x++; x < y; x++){
            if(x%2 == 0){
            } else {
            soma += x;
            }
        }
    }
    printf("%d\n", soma);
    return 0;
}
