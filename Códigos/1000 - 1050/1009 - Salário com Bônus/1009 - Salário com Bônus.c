#include <stdio.h>

int main(){
	
	char nome;
	double salarioFixo, montanteVendas, salarioFinal;
	
	scanf ("%s %lf %lf", &nome, &salarioFixo, &montanteVendas);
	
	salarioFinal = salarioFixo + montanteVendas*0.15 ;
	
	printf("TOTAL = R$ %.2lf\n", salarioFinal);
	
	return 0;
}