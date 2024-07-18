#include <stdio.h>
#include <stdlib.h>

int resto(a,b)
{

    int c, resto, divisivel;
    if (a >= b){

        b++;

        for (c = b; c < a; c++){


            resto = c%5;

            if (resto == 2){
                printf("%d\n", c);
            }
            if (resto == 3){
                printf("%d\n", c);
            }

        }

    } else {

        a++;

        for (c = a; c < b; c++){


            resto = c%5;

            if (resto == 2){
                printf("%d\n", c);
            }
            if (resto == 3){
                printf("%d\n", c);
            }

        }

    }
    return 0;

}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    resto (x,y);
    return 0;
}
