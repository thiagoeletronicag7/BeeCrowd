#include <stdio.h>


int main()
{
	
	int  c, b, e, i, j, d, espelho;
	
	scanf("%d", &c);
	
	while (c > 0)
	{
		scanf ("%d %d", &b, &e);
		
		for (i = b; i <= e; i++) printf("%d", i);
		
		for (i = e; i >= b; i--)
		{
			d = i;
			while (d)
			{
				espelho = d%10;
				printf("%d", espelho);
				d = d/10;
			}
		}
		
		printf("\n");
		c--;
	}
	
    return 0;
}
