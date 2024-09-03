#include <stdio.h>
#include <math.h>

double fibonacci(int n)
{
	double raiz_De_Cinco, p1, p2, potencia1, potencia2, fib;
	
	p1 = ((1+sqrt(5))/2);
	
	potencia1 = pow(p1, n);
	
	p2 = ((1-sqrt(5))/2);
	
	potencia2 = pow(p2, n);
	
	fib = (potencia1 - potencia2)/sqrt(5);
	
	return fib;
}

int main()
{
	
	int x;
	double resultado;
	
	scanf("%d", &x);
	
	resultado = fibonacci(x);
	
	printf("%.1lf\n", resultado);
	
	return 0;
}