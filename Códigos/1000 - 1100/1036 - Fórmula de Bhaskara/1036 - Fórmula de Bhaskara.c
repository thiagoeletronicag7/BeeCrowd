#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, delta, raiz, x1, x2;
	
	scanf ("%lf %lf %lf", &a, &b, &c);
	
	delta = (b*b) - (4.0 * a * c);
	
	if ((delta < 0) || (a == 0)) printf ("Impossivel calcular\n");
	else 
	{
		raiz = sqrt(delta);
		x1 = ((-1.0)*b + raiz)/(2.0 * a);
		x2 = ((-1.0)*b - raiz)/(2.0 * a);
		printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
	}
	
	return 0;
}