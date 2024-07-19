#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0, b, i;
    for(i = 1; i <= 100; i++)
    {
        b = 1/i;
        a = a + b;
    }
    printf("%.2f\n", a);
    return 0;
}
