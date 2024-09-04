#include <stdio.h>

int main()
{

	int a, b, c, A, B, C;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < (b+c) && b < (a+c) && c < (a+b)) 
	{
		if ((a >= b) && (a >= c)) //coloca em ordem crescente
		{
			A = a;
			if (b >= c)
			{
				B = b;
				C = c; 
			} else 
			{
				B = c;
				C = b;
			}
		} else if ((b >=a) && (b >=c ))
		{
			A = b;
			if (a >=c)
			{
				B = a;
				C = c;
			} else 
			{
				B = c;
				C = a;
			}
		} else 
		{
			A = c;
			if (a >= b)
			{
				B = a;
				C = b;
			} else 
			{
				B = b;
				C = a;
			} 
		} //fim ordem crescente
		
		if ((A*A) == ((B*B)+(C*C))) printf("r\n");
		else if ((A*A) > (B*B)+(C*C)) printf("o\n");
		else printf("a\n");
			
	} else printf("n\n");

    return 0;
}