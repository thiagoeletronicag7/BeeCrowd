#include <stdio.h>

int main(){
	
	double x, y, consumo;
	
	scanf("%lf %lf", &x, &y);
	
	consumo = x/y;
	
	printf("%.3lf km/l\n", consumo);
	
	return 0;
}