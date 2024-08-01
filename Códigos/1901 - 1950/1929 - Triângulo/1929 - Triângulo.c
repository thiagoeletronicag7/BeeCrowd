#include <stdio.h>

int main()
{
	
	int a, b, c, d;
	
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	
	if (a < (b+c) && b < (a+c) && c < (a+b)) printf ("S\n");
	else if (b < (d+c) && d < (b+c) && c < (d+b)) printf ("S\n");
	else if (a < (d+c) && d < (a+c) && c < (a+d)) printf ("S\n");
	else if (a < (b+d) && b < (a+d) && d < (a+b)) printf ("S\n");
	else printf("N\n");
	return 0;
}