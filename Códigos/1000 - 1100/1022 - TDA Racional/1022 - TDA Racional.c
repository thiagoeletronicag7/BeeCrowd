#include <stdio.h>

int main(){

    int quantidadeDeOperacoes;
    int numerador1, denominador1, numerador2, denominador2;
    char caractereDeLeitura, caractereDeLinguica;
    int numerosPrimosParaSimplificacao[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

    scanf("%d", &quantidadeDeOperacoes);

    for(int j = 0; j < quantidadeDeOperacoes; j++){
        scanf("%d", &numerador1);
        scanf(" %c", &caractereDeLinguica);
        scanf("%d", &denominador1);

        scanf(" %c", &caractereDeLeitura);

        scanf("%d", &numerador2);
        scanf(" %c", &caractereDeLinguica);
        scanf("%d", &denominador2);

        int numeradorResultado, denominadorResultado;

        switch(caractereDeLeitura){
            case '+':
                numeradorResultado = (numerador1*denominador2)+(numerador2*denominador1);
                denominadorResultado = (denominador1*denominador2);
                break;
            case '-':
                numeradorResultado = (numerador1*denominador2)-(numerador2*denominador1);
                denominadorResultado = (denominador1*denominador2);
            break;
            case '*':
                numeradorResultado = numerador1*numerador2;
                denominadorResultado = denominador1*denominador2;
                break;
            case '/':
                numeradorResultado = numerador1*denominador2;
                denominadorResultado = numerador2*denominador1;
                break;
            default:
                printf("Nenhum valor valido");
        }

        printf("%d/%d = ", numeradorResultado, denominadorResultado);

        for(int i = 0; i < 12; i++){
            while((numeradorResultado%numerosPrimosParaSimplificacao[i] == 0) && (denominadorResultado%numerosPrimosParaSimplificacao[i] == 0)){
                numeradorResultado /= numerosPrimosParaSimplificacao[i];
                denominadorResultado /= numerosPrimosParaSimplificacao[i];
            }
        }

        printf("%d/%d\n", numeradorResultado, denominadorResultado);
    }

    return 0;
}
