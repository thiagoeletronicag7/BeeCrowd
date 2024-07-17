#include <stdio.h>

#define PESO1 2.0
#define PESO2 3.0
#define PESO3 5.0

int main(){
	
	double a, b, c, media;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	media = (a*PESO1+b*PESO2+c*PESO3)/(PESO1+PESO2+PESO3);
	
	printf("MEDIA = %.1lf\n", media);
	
	return 0;
}