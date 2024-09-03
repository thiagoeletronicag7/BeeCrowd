#include <stdio.h>
#include <string.h>

int main()
{
    int i, j=0, tamanhorisada, tamanhocompare;
    char x[60], y[60];
    
    scanf("%s", x);
    
    tamanhorisada = strlen(x);
    
    for(i = 0; i < tamanhorisada; i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
        {
            y[j] = x[i]; //guarda as vogais em outro vetor
            j++;
        }
    }
    
    y[j] = '\0'; //acrescenta o nulo na ultima "casa" do vetor
    
    tamanhocompare = strlen(y);
    
	for(i = 0, j = tamanhocompare-1; i < tamanhocompare; i++, j--)
    {
    	
        if(y[i] != y[j]) //compara se a ida e a volta das vogais sao iguais, caso sim, escreve S, caso nao, escreve N
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}