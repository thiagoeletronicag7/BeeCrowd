#include <stdio.h>

int main()
{
	
	int i, T, N[1000], x = -1;
	
	scanf("%d", &T);
	
	for (i = 0; i < 1000; i++)
	{
		x = x + 1;
		N[i] = x;
		if (N[i] == (T-1)) x = -1;
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}