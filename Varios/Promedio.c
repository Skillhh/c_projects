#include<stdio.h>

float promedio( float a, float b, float c, float d, float e);

int main()
{
	float a, b, c, d, e;
	printf("\n****** Promedio de cinco numeros ******\n");
	printf("\nIngrese un numero: ");
	scanf( "%f",&a);
	printf("\nIngrese otro numero: ");
	scanf( "%f",&b);
	printf("\nIngrese otro numero: ");
	scanf( "%f",&c);
	printf("\nIngrese un numero mas: ");
	scanf( "%f",&d);
	printf("\nIngrese otro numero: ");
	scanf( "%f",&e);
	promedio( a, b, c, d, e);
	
	
}
float promedio( float a, float b, float c, float d, float e)
{
	float promedio = ( a + b + c + d + e )/5;
	printf("\n El Promedio es: %.1f\n\n", promedio);	
}
