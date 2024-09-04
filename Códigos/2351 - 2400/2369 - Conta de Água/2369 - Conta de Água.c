#include <stdio.h>

int main()
{

	int n, conta, sobra;

	scanf("%d", &n);
	
	if (n <= 10) 
	{
	conta = 7;
	} else if (n > 10 && n <= 30)
	{
		conta = 7 + (n-10);
	} else if (n > 30 && n <= 100)
	{
		conta = 27 + (n-30)*2;
	} else if (n > 100)
	{
		conta = 167 + (n-100)*5;
	}
	
	printf("%d\n", conta);
	

	return 0;
}
