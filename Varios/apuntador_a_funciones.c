#include<stdio.h>

/* El prototipo de la funcion */
float square( float x );

/* La declaracion del apuntador */
float (*p) ( float x );

int main(){

	/* Asignacion valor inicial a para que apuntea square */
	p = square;

	/* Llama a square() de dos maneras */
	printf( "%f %f", square(6.6), p(6.6) );
	puts("\n");

}
float square( float x ){

	return x * x;

}
