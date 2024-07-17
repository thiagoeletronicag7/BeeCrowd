#include <stdio.h>

int main(){
	
	int cod, qtd;
	double preco, total;
	
	scanf("%d %d", &cod, &qtd);
	
	if (cod == 1) preco = 4.0;
	else if (cod == 2) preco = 4.5;
	else if (cod == 3) preco = 5.0;
	else if (cod == 4) preco = 2.0;
	else if (cod == 5) preco = 1.5;
	
	total = preco*qtd;
	
	printf("Total: R$ %.2lf\n", total);
	
	return 0; 
}