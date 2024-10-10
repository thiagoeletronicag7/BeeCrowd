#include <stdio.h>


int main()
{
    int frango, bife, massa;
    int pedido_frango, pedido_bife, pedido_massa;
    int sem_refeicao = 0;

    scanf("%i %i %i", &frango, &bife, &massa);
    scanf("%i %i %i", &pedido_frango, &pedido_bife, &pedido_massa);

    if(pedido_frango > frango)
        sem_refeicao = sem_refeicao + pedido_frango - frango;
    if(pedido_bife > bife)
        sem_refeicao = sem_refeicao + pedido_bife - bife;
    if(pedido_massa > massa)
        sem_refeicao = sem_refeicao + pedido_massa - massa;

    printf("%i\n", sem_refeicao);



	return 0;
}