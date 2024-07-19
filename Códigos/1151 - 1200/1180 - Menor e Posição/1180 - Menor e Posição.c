#include <stdio.h>

int main()
{
	
	int n, x[1000], i, menor, countmenor = 0;
	
	scanf("%d", &n);
	
	scanf("%d", &x[0]);
	menor = x[0];
	
	for (i = 1; i < n; i++)
	{
		scanf("%d", &x[i]);
				
		if (menor >= x[i])
		{
			menor = x[i];
			countmenor = i;
		}
				
	}
	
	printf ("Menor valor: %d\nPosicao: %d\n", menor, countmenor);

	
	return 0;
}