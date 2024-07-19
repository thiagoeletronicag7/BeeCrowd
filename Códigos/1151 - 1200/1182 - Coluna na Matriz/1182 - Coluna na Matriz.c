#include <stdio.h>

int main ()
{
	
	double M[12][12], soma = 0.0, media;
	int i, j, c;
	char t[2];
	
	scanf("%d %s", &c, &t);
	
	for (i = 0; i < 12; i++)
	{	
		for (j = 0; j < 12; j++)
		{
			scanf("%lf", &M[i][j]);
			if (j == c)
			{
				soma = soma + M[i][j];
			}
		}
	}
	
		if (t[0] == 'S') printf ("%.1lf\n", soma);
		else if (t[0] == 'M')
		{
			media = soma/12.0;
			printf("%.1lf\n", media);
		}
	
	return 0;
}