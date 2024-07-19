#include <stdio.h>

int main()
{
	
	long long int j, n, fibonacci = 0, anterior = 1, atual;
	int i, teste;
	
	scanf("%d", &teste);
	
	for (i = 0; i < teste; i++)
	{
		fibonacci = 0;
		anterior = 1;
		
		scanf("%lld", &n);
		
		n = n + 1;
		
		for (j = 0; j < n; j++)
		{
			if (j <= 1) atual = j;
			else 
			{
				atual = fibonacci + anterior;
				fibonacci = anterior;
				anterior = atual;
			}
		}
		
		printf("Fib(%lld) = %lld\n", n-1, atual);
	}
	
	return 0;
}