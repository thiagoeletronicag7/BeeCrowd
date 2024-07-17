#include <stdio.h>

int main()
{
	
	double salario, reajuste, valorReajuste;

		scanf("%lf", &salario);

		if (salario <= 400)
		{
			reajuste = salario*1.15;
			valorReajuste = reajuste - salario;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", reajuste , valorReajuste);
		} else if ((salario > 400) && (salario <= 800))
		{
			reajuste = salario*1.12;
			valorReajuste = reajuste - salario;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", reajuste , valorReajuste);
		} else if ((salario > 800) && (salario <= 1200))
		{
			reajuste = salario*1.10;
			valorReajuste = reajuste - salario;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", reajuste , valorReajuste);
		} else if ((salario > 1200) && (salario <= 2000))
		{
			reajuste = salario*1.07;
			valorReajuste = reajuste - salario;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", reajuste , valorReajuste);
		} else 
		{
			reajuste = salario*1.04;
			valorReajuste = reajuste - salario;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", reajuste , valorReajuste);
		}
	
	return 0;
}