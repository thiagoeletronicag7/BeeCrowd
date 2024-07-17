#include <stdio.h>

int main()
{
	
	double n1, n2, n3, n4, media, p1 = 2.0, p2 = 3.0, p3 = 4.0, p4 = 1.0, exame, mediaexame;
	
	scanf ("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	
	media = (n1*p1 + n2*p2 + n3*p3 + n4*p4)/(p1 + p2 + p3+ p4);
	
	if (media >= 7.0) printf("Media: %.1lf\nAluno aprovado.\n", media);
	else if (media < 5.0) printf("Media: %.1lf\nAluno reprovado.\n", media);
	else
	{
		printf("Media: %.1lf\nAluno em exame.\n", media);
		scanf  ("%lf", &exame);
		mediaexame = (media+exame)/2;
		if (mediaexame >= 5.0) printf("Nota do exame: %.1lf\nAluno aprovado.\nMedia final: %.1lf\n", exame, mediaexame);
		else printf("Nota do exame: %.1lf\nAluno reprovado.\nMedia final: %.1lf\n", exame);
	}
	
	return 0;
}