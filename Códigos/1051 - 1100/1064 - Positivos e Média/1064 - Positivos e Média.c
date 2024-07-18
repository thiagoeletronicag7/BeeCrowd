#include <stdio.h>


int main()
{

    int cont = 0, i;
    float num, media = 0;

    for(i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num >= 0)
        {
            cont++;
            media += num;
        }
    }

    media = media/ (float) cont;

    printf("%i valores positivos\n%.1f\n", cont, media);

	return 0;
}
