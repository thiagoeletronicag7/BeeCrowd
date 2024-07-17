#include <stdio.h>

int main()

{

	double valor, tmp;
	int nota, restocem, restocinquenta, restovinte, restodez, restocinco, conversor;
	int cem, cinquenta, vinte, dez, cinco, dois;
	int restom_um, restom_cinquenta, restom_vintecinco, restom_dez;
	int m_um, m_cinquenta, m_vintecinco, m_dez, m_cinco, m_umc;

	scanf ("%lf", &valor);
	
	printf ("NOTAS:\n");

	nota = valor;

	cem = nota / 100;
	restocem = nota % 100;
	
		printf ("%i nota(s) de R$ 100.00\n", cem);

	cinquenta = restocem / 50;
	restocinquenta = restocem % 50;
	
		printf ("%i nota(s) de R$ 50.00\n", cinquenta);

	vinte = restocinquenta / 20;
	restovinte = restocinquenta % 20;
	
		printf ("%i nota(s) de R$ 20.00\n", vinte);

	dez = restovinte / 10;
	restodez = restovinte % 10;
	
		printf ("%i nota(s) de R$ 10.00\n", dez);

	cinco = restodez / 5;
	restocinco = restodez % 5;
	
		printf ("%i nota(s) de R$ 5.00\n", cinco);
		
	dois = restocinco / 2;
	
		printf ("%i nota(s) de R$ 2.00\n", dois);
	
	printf ("MOEDAS:\n");

	m_um= restocinco % 2;

		printf ("%i moeda(s) de R$ 1.00\n", m_um);


	tmp = valor*100; //para operacao com moedas

	conversor = (int) tmp; //para solucionar problema com as casas decimais (nao entende 0.1, mas 0.09, por ex)

	restom_um = conversor % 100;

	m_cinquenta = restom_um / 50;
	
		printf ("%i moeda(s) de R$ 0.50\n", m_cinquenta);

	restom_cinquenta = restom_um % 50;
	m_vintecinco = restom_cinquenta / 25;

		printf ("%i moeda(s) de R$ 0.25\n", m_vintecinco);
		
	restom_vintecinco = restom_cinquenta % 25;
	m_dez = restom_vintecinco / 10;
	
		printf ("%i moeda(s) de R$ 0.10\n", m_dez);

	restom_dez = restom_vintecinco % 10;
	m_cinco = restom_dez / 5;
	
		printf ("%i moeda(s) de R$ 0.05\n", m_cinco);
		
	m_umc = restom_dez % 5;

		printf ("%i moeda(s) de R$ 0.01\n", m_umc);

	return 0;

}
