#include <stdio.h>
 
#define PI 3.14159 

int main() {
 
    double raio;
    scanf("%lf", &raio);
    
    double area = PI*raio*raio;
 
    printf("A=%.4lf\n", area);
    
    return 0;
}
