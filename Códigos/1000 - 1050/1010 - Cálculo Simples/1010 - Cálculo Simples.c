#include <stdio.h>

int main(){
	
	int codPeca1, numPeca1,  codPeca2, numPeca2; 
	double valorPeca1, valorPeca2, valorTotal;
	
	scanf("%d %d %lf", &codPeca1, &numPeca1, &valorPeca1);
	scanf("%d %d %lf", &codPeca2, &numPeca2, &valorPeca2);
	
	valorTotal = numPeca1*valorPeca1 + numPeca2*valorPeca2;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
	
	return 0;
}