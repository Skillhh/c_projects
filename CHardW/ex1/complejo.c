#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct complejo{
	float pr;
	float pi;
	float modulo;
};

int main(){
	struct complejo z;

	printf("\nParte real: ");
	scanf("%f", &z.pr);
	printf("\nParte imaginaria: ");
	scanf("%f", &z.pi);
/* Calculando el Modulo */
	z.modulo = sqrt( z.pr * z.pr + z.pi * z.pi);

	printf("\nEl moduo es: %f \n", z.modulo);

	return 0;
}
