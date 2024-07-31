#include <stdio.h>

int printMatriz(int x)
{

    int matriz[x][x];
    int linha, coluna;
    for (linha = 0; linha < x; linha++)
    {
        for(coluna = 0; coluna < x; coluna++)
        {
            if(linha == coluna) matriz[linha][coluna] = 1;
            else if (linha < coluna) matriz[linha][coluna] = coluna - linha + 1;
            else matriz[linha][coluna] = linha - coluna + 1;

            if(coluna == 0) printf("%3i", matriz[linha][coluna]);
            else printf(" %3i", matriz[linha][coluna]);
        }

        printf("\n");
    }

}

int main()
{
    int N = -1, linha, coluna;

    while(N)
    {

     scanf("%i", &N);

     if(N == 0) return 0;

     printMatriz(N);

     printf("\n");

    }

	return 0;
}
