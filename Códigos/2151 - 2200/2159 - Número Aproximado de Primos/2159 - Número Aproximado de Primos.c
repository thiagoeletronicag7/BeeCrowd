#include <stdio.h>
#include <math.h>


int main()
{

    const double CONSTANTE = 1.25506;
    int n;
    double ln, divisao, p, m;

    scanf("%i", &n);

    ln = log(n);

    divisao = (double) n/ln;

    p = divisao;

    m = CONSTANTE*divisao;

    printf("%.1lf %.1lf\n", p, m);

	return 0;
}
