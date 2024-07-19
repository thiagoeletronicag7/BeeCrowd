#include <stdio.h>

int main ()
{
	
	double M[12][12], soma = 0.0, media;
	int i, j;
	char o[2];
	
	scanf("%s", &o);
	
	for (i = 0; i < 12; i++)
	{	
		for (j = 0; j < 12; j++)
		{
			scanf("%lf", &M[i][j]);
			
			if (j > i)
			{
				soma = soma + M[i][j];
			}
		}
	}
	
		if (o[0] == 'S') printf ("%.1lf\n", soma);
		else if (o[0] == 'M')
		{
			media = soma/66.0;
			printf("%.1lf\n", media);
		}
	
	return 0;
}