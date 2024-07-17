#include <stdio.h>

int main()
{
	
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if ((a%b != 0) && (b%a != 0))
	{
		printf ("Nao sao Multiplos\n");
	} else 
	{
		printf("Sao Multiplos\n");
	}
	
	return 0;
}