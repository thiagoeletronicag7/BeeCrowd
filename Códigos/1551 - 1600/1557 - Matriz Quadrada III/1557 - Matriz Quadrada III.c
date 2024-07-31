#include <stdio.h>
#include<math.h>

int digitos(int  x);
	
int main() {
    int N, i, j, k, numero_atual, maior_numero, num, tam1, tam2;
    scanf("%d", &N);
    while(N!=0)
    {
        maior_numero = (int)(pow(2,N-1) * pow(2,N-1));
        
        tam1 = digitos(maior_numero);
    
        for(i=0; i<N; i++) // linha
        {
            for(j=0; j<N; j++) // coluna
            {
                numero_atual = (int)(pow(2,i) * pow(2,j));
                num = numero_atual;

            	tam2 = digitos(num);

                for(k=0; k<(tam1 - tam2); k++)
                {
                    printf(" ");
                }
                if(j!=0)
                    printf(" ");
                printf("%d", numero_atual);
            }
        printf("\n");
        }
        scanf("%d", &N);
        printf("\n");
    }
    return 0;
}

int digitos(int  x) {
	
	int tamanho = 1;
	
	while((x%10 != 0 )||(x/10 != 0))
	{
		x=x/10;
		tamanho++;
	}
	
	return tamanho;
}