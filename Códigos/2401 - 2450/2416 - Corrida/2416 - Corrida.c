#include <stdio.h>

int main()
{

	long int c;
	int  n, volta, termino;
	
	scanf("%ld %d", &c, &n);
	
	termino = c%n;
	
	printf("%d\n", termino);

    return 0;
}
