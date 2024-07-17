#include <stdio.h>

int main(){
	
	int num, horasT;
	double valorH, salario;
	
	scanf("%d %d %lf", &num, &horasT, &valorH);
	
	salario = (valorH*horasT);
	
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salario);
	
	return 0;
}