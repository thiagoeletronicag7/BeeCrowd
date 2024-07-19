#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 12
#define C 12

int main(){
	int i, j;
	char O[2];
	double M[L][C], acimaprincipal[L][C], acimasecundaria[L][C], acimadiagonais[L][C], soma=0.0;


	scanf("%c", &O);

	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			scanf("%lf", &M[i][j]);
		}
	}


	for(i=0; i < L; i++){
		for (j=0; j < C; j++){

                if (j<=C-i-2) { //Elementos acima da diagonal secundária//
				acimasecundaria[i][j] = M[i][j];
			}
                if (j>i) {
				acimaprincipal[i][j] = M[i][j];
			}

		}
	}

	for(i=0; i < L; i++){
		for (j=0; j < C; j++){

                if (acimasecundaria[i][j] == acimaprincipal[i][j]){
                     soma = soma + M[i][j];
                }

		}
    }

    if (O[0] == 'S')
    {
        printf("%.1lf\n", soma);
    } else if (O[0] == 'M')
    {
        soma = soma/30.0;
        printf("%.1lf\n", soma);
    }


	return 0;
}
