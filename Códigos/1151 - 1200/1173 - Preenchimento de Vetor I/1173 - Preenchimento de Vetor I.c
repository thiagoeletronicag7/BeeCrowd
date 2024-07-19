#include <stdio.h>

int main ()
{
	
	int N[10], i, n;
	
	scanf ("%d", &n);
	
	for (i = 0; i < 10; i++)
	{
		N[i] = n;
		n = n*2;
	}
	
	for (i = 0; i < 10; i++) printf("N[%d] = %d\n", i, N[i]);
	
	return 0;
}