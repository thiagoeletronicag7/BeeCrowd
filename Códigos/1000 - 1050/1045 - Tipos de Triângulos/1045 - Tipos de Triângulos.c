#include <stdio.h>

int main()
{
	
	double a, b, c, maior, meio, menor;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
		if ((a >= b) && (a >= c))
	{
		if (b >= c) 
		{
			maior = a;
			meio = b;
			menor = c;
		} else 
		{
			maior = a;
			meio = c;
			menor = b;
		}
	} else if ((b >= a) && (b >= c))
	{
		if (a >= c) 
		{
			maior = b;
			meio = a;
			menor = c;
		} else 
		{
			maior = b;
			meio = c;
			menor = a;
		}
	} else if ((c >= a) && (c >= b))
	{
		if (a >= b) 
		{
			maior = c;
			meio = a;
			menor = b;
		} else 
		{
			maior = c;
			meio = b;
			menor = a;
		}
	} //ordem das variaveis
	
	//inicio dos testes tipo triangulo
	
	if (maior >= (meio+menor)) printf("NAO FORMA TRIANGULO\n");
	else if ((maior*maior) == ((meio*meio)+(menor*menor))) printf("TRIANGULO RETANGULO\n");
	else if ((maior*maior) > ((meio*meio)+(menor*menor))) printf("TRIANGULO OBTUSANGULO\n");
	else printf("TRIANGULO ACUTANGULO\n");
	
	// testes lados iguais
	
	if ((maior == meio) && (meio == menor)) printf("TRIANGULO EQUILATERO\n");
	else if ((maior == meio) || (meio == menor) || maior == menor) printf("TRIANGULO ISOSCELES\n");
	
	return 0;
}