#include <stdio.h>

int main (){
	
	double tempo, velocidade, consumo, distancia;
	
	scanf("%lf %lf", &tempo, &velocidade);
	
	distancia = tempo*velocidade;
	consumo = distancia/12;
	
	printf("%.3lf\n", consumo);
	
	return 0;
}