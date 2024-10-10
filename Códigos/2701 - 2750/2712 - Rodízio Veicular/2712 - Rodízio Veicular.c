#include <stdio.h>
#include <string.h>

int main(void) {
	int n = 0, tamanho = 0, maiusculo = 0, 
	barra = 0, num = 0;
	char placa[100];

	scanf("%d", &n);

	while(n > 0) {
		scanf("%s", placa);

		tamanho = strlen(placa); //ve a quantidade de caracteres da placa

		//verifica se os caracteres sao maiusculos, usando os valores da tabela ASCII, por isso as aspas nas letras

		if(tamanho == 8) {
			if(placa[0] >= 'A' && placa[0] <= 'Z') {
				if(placa[1] >= 'A' && placa[1] <= 'Z') {
					if(placa[2] >= 'A' && placa[2] <= 'Z') {
						maiusculo = 1;
					}
				}
			}
		}

		//verifica se tem barra

		if(placa[3] == '-' && maiusculo == 1) {
			barra = 1;
		}

		//verifica se tem 4 numeros, na forma padrao da digitacao

		if(barra == 1) {
			if(placa[4] >= '0' && placa[4] <= '9') {
				if(placa[5] >= '0' && placa[5] <= '9') {
					if(placa[6] >= '0' && placa[6] <= '9') {
						if(placa[7] >= '0' && placa[7] <= '9') {
							num = 1;
						}
					}
				}
			}
		}

		//verifica com base na tabela, os dias da semana, se tem numero conforme o modelo ele checa, se nao, mensagem de falha

		if(num == 1) {	
			if(placa[tamanho - 1] == '1' || placa[tamanho - 1] == '2') {
				printf("MONDAY\n");
			}else if(placa[tamanho - 1] == '3' || placa[tamanho - 1] == '4') {
				printf("TUESDAY\n");
			}else if(placa[tamanho - 1] == '5' || placa[tamanho - 1] == '6') {
				printf("WEDNESDAY\n");
			}else if(placa[tamanho - 1] == '7' || placa[tamanho - 1] == '8') {
				printf("THURSDAY\n");
			}else if(placa[tamanho - 1] == '9' || placa[tamanho - 1] == '0') {
				printf("FRIDAY\n");
			} 
		} else {
				printf("FAILURE\n");
			}

		barra = 0, maiusculo = 0, num = 0;
		n--;
	}

	return 0;
}