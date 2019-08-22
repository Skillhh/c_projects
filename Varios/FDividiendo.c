#include<stdio.h>

float dividiendo( float a, float b );

int main()
{
printf("\n**** Division ****\n");
	
	float dividendo, divisor;
	
	printf( "Ingrese el dividendo: " );
	scanf( "%f", &dividendo );
	fflush(stdin);
	printf("Ingrese el divisor: ");
	scanf( "%f", &divisor );
	fflush(stdin);
	
	if( divisor == 0)
		printf( "\nel divisor debe ser diferente de cero.\n\n");
	else
	{
		printf( "\nEl cociente es igual a : %.2f\n\n", dividiendo( dividendo, divisor ) );
	}
	
}
float dividiendo( float a, float b )
{
	float c = 0;
	c = a / b;
	return c;
	
}