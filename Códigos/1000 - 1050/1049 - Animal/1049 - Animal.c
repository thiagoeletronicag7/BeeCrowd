#include <stdio.h>
#include <string.h>

int main(){
	
	char vertebra[13], classe[9], alimentacao[12];
	int retornovert, retornoclasse, retornoalimentacao;
	
	scanf("%s %s %s", vertebra, classe, alimentacao);
	
	if (strcmp(vertebra, "vertebrado") == 0)
	{
		if (strcmp(classe, "ave") == 0)
		{
			if (strcmp(alimentacao, "carnivoro") == 0) printf("aguia\n");
			else if (strcmp(alimentacao, "onivoro") == 0) printf ("pomba\n");
		} else if (strcmp(classe, "mamifero") == 0)
		{
			if (strcmp(alimentacao, "onivoro") == 0) printf ("homem\n");
			else if (strcmp(alimentacao, "herbivoro") == 0) printf ("vaca\n");
		}
	} else 	if (strcmp(vertebra, "invertebrado") == 0)
	{
		if (strcmp(classe, "inseto") == 0)
		{
			if (strcmp(alimentacao, "hematofago") == 0) printf("pulga\n");
			else if (strcmp(alimentacao, "herbivoro") == 0) printf ("lagarta\n");
		} else if (strcmp(classe, "anelideo") == 0)
		{
			if (strcmp(alimentacao, "hematofago") == 0) printf ("sanguessuga\n");
			else if (strcmp(alimentacao, "onivoro") == 0) printf ("minhoca\n");
		}
	}
	
	return 0;
}