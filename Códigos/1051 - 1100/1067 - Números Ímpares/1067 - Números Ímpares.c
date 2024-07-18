#include <stdio.h>


int main()
{

    int x, i = 0;

    scanf("%i", &x);

    while(i <= x)
    {
        if (i%2 != 0) printf("%i\n", i);
        i++;
    }

	return 0;
}
