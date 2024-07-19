#include <stdio.h>

int main()
{
	
	int par[5], impar[5], x, i, zera, countpar = 0, countimpar = 0, restopar, restoimpar;
	
	for (i = 0; i < 15; i++)
	{
		scanf ("%d", &x);
		
		if (x%2 == 0)
		{
			par[countpar] = x;
			countpar++;
			if (countpar == 5)
			{
				for (zera = 0; zera < 5; zera++)
				{
					printf("par[%d] = %d\n", zera, par[zera]);
				}
				countpar = 0;
			} 
		} else
		{
			impar[countimpar] = x;
			countimpar++;
			if (countimpar == 5)
			{
				for (zera = 0; zera < 5; zera++)
				{
					printf("impar[%d] = %d\n", zera, impar[zera]);
				}
				countimpar = 0;
			}
		}
	}
	
	for (zera = 0; zera < countimpar; zera++)	printf("impar[%d] = %d\n", zera, impar[zera]);
	for (zera = 0; zera < countpar; zera++)	printf("par[%d] = %d\n", zera, par[zera]);
				
				
				

	return 0;
}