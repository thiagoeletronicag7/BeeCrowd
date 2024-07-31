#include <stdio.h>
#include <string.h>

int main()
{
	
	char num[10];
	int testes, i, tamanho;
	
	scanf("%d", &testes);
	
	for (i = 0; i < testes; i++)
	{
		
		scanf("%s", num);
		
		tamanho = strlen(num);
		
		if (tamanho == 5)
		{
			printf("3\n");
		} else
		{
			if((num[0] == 'o' && num[1] == 'n') || (num[0] == 'o' && num[2] == 'e') || (num[1] == 'n' && num[2] == 'e')) printf("1\n");
			else printf ("2\n");
		}
	}

    return 0;
}
