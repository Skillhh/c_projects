#include<stdio.h>

double pow(double, int);

int main(void){
    double num;
    int repeat;

    printf("Escribe el numero: ");
    scanf("%lf", &num);
    printf("elevado a: ");
    scanf("%d", &repeat);
    
    double aSquared = pow(num, repeat);

    printf("%.2lf squared = %.2lf\n", num, aSquared);

    return 0;
}
