#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, i = 0, in = 0, out = 0;
    scanf("%d", &n);
    while (i < n){
        scanf("%d", &x);
        if (x >= 10 && x <= 20){
            in++;
        } else {
            out++;
        }
        i++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
