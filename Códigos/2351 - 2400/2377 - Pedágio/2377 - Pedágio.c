#include <stdio.h>

int main()
{

	long int l, d, k, p; //l comprimento da estrada e d distancia dos pedagios, k, p, custo/km e preco do pedagio
	long int preco;
	
	scanf ("%ld %ld", &l, &d);
	scanf ("%ld %ld", &k, &p);
	
	preco = (l/d)*p + k*l;
	
	printf("%ld\n", preco);

    return 0;
}
