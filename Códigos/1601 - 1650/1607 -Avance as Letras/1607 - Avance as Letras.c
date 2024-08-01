#include <stdio.h>

int main()
{
    int t, auxiliar;
    char a[10001], b[10001], *p1, *p2; //p1 aponta para a, p2 para b

    scanf("%d", &t);

    while (t) {
    
        auxiliar = 0;

        scanf("%s %s", a, b);

        for (p1 = a, p2 = b; *p1 != '\0'; p1++, p2++) {
            if (*p2 >= *p1)
                auxiliar = auxiliar + *p2 - *p1;
            else
                auxiliar = auxiliar + ('z' - *p1) + (*p2 - 'a') + 1;
        }

        printf("%d\n", auxiliar);

        t--;
    }

    return 0;
}