#include <stdio.h>

#define PI 3.14159

int main(){
	
	double a, b, c, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	//triangulo 
	areaTriangulo = (a*c)/2.0;
	
	//circulo
	areaCirculo = c*c*PI;
	
	//trapezio
	areaTrapezio = ((a+b)*c)/2.0;
	
	//quadrado
	areaQuadrado = b*b;
	
	//retangulo
	areaRetangulo = a*b;
	
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo);
	return 0;
}