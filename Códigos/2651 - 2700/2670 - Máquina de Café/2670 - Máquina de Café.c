#include <stdio.h>


int main()
{
    int tempoandar_1, tempoandar_2, tempoandar_3;
    int a1, a2, a3;
    int melhor;

    scanf("%i %i %i", &a1, &a2, &a3);

    tempoandar_1 = a1*0 + a2*2 + a3*4; //é sempre múltiplo de 2, pois conta a subida e a descida
    tempoandar_2 = a1*2 + a2*0 + a3*2;
    tempoandar_3 = a1*4 + a2*2 + a3*0;

    //verificar qual dos valores é menor
    if((tempoandar_1 <= tempoandar_2 ) && (tempoandar_1 <= tempoandar_3)) melhor = tempoandar_1;
    else if((tempoandar_2 <= tempoandar_1) && (tempoandar_2 <= tempoandar_3)) melhor = tempoandar_2;
    else melhor = tempoandar_3;

    printf("%i\n", melhor);
	return 0;
}