#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i = 2, j, S = 0, c;
    for (j = 3; j <= 39; j += 2)
    {
        c = j/i;
        S = S + c;
        i = i*2;
    }
    S = S + 1;
    printf("%.2f\n", S);
    return 0;
}
