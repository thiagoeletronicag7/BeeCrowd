#include <stdio.h>


int main()
{
    int n, l, i;
    int multiplo_de_dois = 0, multiplo_de_tres = 0, multiplo_de_quatro = 0, multiplo_de_cinco = 0;

    scanf("%i", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%i", &l);

        if(l%2 == 0) multiplo_de_dois++;
        if(l%3 == 0) multiplo_de_tres++;
        if(l%4 == 0) multiplo_de_quatro++;
        if(l%5 == 0) multiplo_de_cinco++;
    }

    printf("%d Multiplo(s) de 2\n", multiplo_de_dois);
    printf("%d Multiplo(s) de 3\n", multiplo_de_tres);
    printf("%d Multiplo(s) de 4\n", multiplo_de_quatro);
    printf("%d Multiplo(s) de 5\n", multiplo_de_cinco);


	return 0;
}
