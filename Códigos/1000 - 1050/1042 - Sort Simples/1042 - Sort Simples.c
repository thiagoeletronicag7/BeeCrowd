#include <stdio.h>

int main()
{
	
	int a, b, c, maior, meio, menor;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a >= b) && (a >= c))
	{
		if (b >= c) 
		{
			maior = a;
			meio = b;
			menor = c;
		} else 
		{
			maior = a;
			meio = c;
			menor = b;
		}
	} else if ((b >= a) && (b >= c))
	{
		if (a >= c) 
		{
			maior = b;
			meio = a;
			menor = c;
		} else 
		{
			maior = b;
			meio = c;
			menor = a;
		}
	} else if ((c >= a) && (c >= b))
	{
		if (a >= b) 
		{
			maior = c;
			meio = a;
			menor = b;
		} else 
		{
			maior = c;
			meio = b;
			menor = a;
		}
	}
	
	printf("%d\n%d\n%d\n", menor, meio, maior);
	printf("\n");
	printf("%d\n%d\n%d\n", a, b, c);
	
	return 0;
}