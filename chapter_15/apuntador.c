/* Demostracion de la declaracio y uso de un apuntador a una funcion */
#include<stdio.h>

/* Prototipo de la funcion */
float square( float x );

/* La declaracion de apuntador. */
float (*p) ( float x );

int main()
{
	/* Asigna valor inicial a p para que apunte a un square */
	p = square;

	/* Llama a square()  de dos maneras. */
	printf("%f %f", square(6.6), p(6.6) );
	printf("\n");
}
float square(float x)
{
	return x * x;
}
