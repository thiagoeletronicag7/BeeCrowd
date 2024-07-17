#include <stdio.h>


int main()
{

    int n, hora, min, seg;

    scanf("%i", &n);

    hora = n/3600;
    min = (n%3600)/60;
    seg = ((n%3600)%60)%60;

    printf("%i:%i:%i\n", hora, min, seg);


	return 0;
}
