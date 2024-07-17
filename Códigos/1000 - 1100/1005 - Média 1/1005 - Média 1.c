#include <stdio.h>

#define PESO1 3.5
#define PESO2 7.5

int main(){
	
	double a, b, media;
	
	scanf("%lf %lf", &a, &b);
	
	media = (a*PESO1+b*PESO2)/(PESO1+PESO2);
	
	printf("MEDIA = %.5lf\n", media);
	
	return 0;
}