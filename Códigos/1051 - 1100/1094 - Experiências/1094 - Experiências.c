#include <stdio.h>

int main(){
	
	int teste; 
	double qtd, rato = 0.0, coelho = 0.0, sapo = 0.0, total = 0.0, prctcoelho, prctrato, prctsapo;
	char cobaia;
	
	scanf("%d", &teste);
	
	while (teste > 0)
	{
		scanf("%lf %c", &qtd, &cobaia);
		
		total = total + qtd;
		
		switch (cobaia )
		{
			case 'C': 
			coelho = qtd + coelho;
			break;
			case 'S':
			sapo = qtd + sapo;
			break;
			case 'R':
			rato = rato + qtd;
			break;	
		}
		
		teste --;
	}
	prctcoelho = (coelho/total)*100.0;
	prctrato = (rato/total)*100.0;
	prctsapo = (sapo/total)*100.0;
	printf("Total: %.0lf cobaias\nTotal de coelhos: %.0lf\nTotal de ratos: %.0lf\nTotal de sapos: %.0lf\n", total, coelho, rato, sapo);
	printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", prctcoelho, prctrato, prctsapo);
	
	return 0;
}