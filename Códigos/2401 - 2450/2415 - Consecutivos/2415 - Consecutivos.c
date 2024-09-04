#include <stdio.h>

int max(int x, int y)
{
	if (x > y) return x;
	else return y;
}

int main()
{

	long int n, v[10000], i, ponto = 0, resp = 0;
	
	v[0] = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i < n+1; i++)
	{
		scanf("%d", &v[i]);
		
		if (v[i] == v[i-1])
		{
			ponto++;
		} else resp = max(resp, ponto), ponto = 1;
		
	} 
	
	resp = max(resp, ponto);
	printf ("%d\n", resp);

    return 0;
}
