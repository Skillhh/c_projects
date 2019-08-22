#include<stdio.h>


float producto(float a, float b);
float dividiendo( float a, float b );


int main()
{
	printf( " ******* Fucionando Funciones ******\n " );
	
	float a, b;	
	
	printf("\nIngrese dos numeros: ");
	scanf( "%f",&a);
	printf("\nIngrese dos numeros: ");
	scanf( "%f",&b);
	

	producto( a, b);
	
	if( b == 0 )
		printf("\nAtencion!! \nCero no es una opcion valida para la division, no es posible hacerla.\n\n");
	else
		dividiendo( a, b );	

}
float producto(float a, float b)
{	
	float c =0;
	c = a+b;
	printf("\nEl resultad de la suma es: %.2f \n", c );	
}
float dividiendo( float a, float b )
{
	float c = 0;
	c = a / b;
	printf("\nEl reultado de la division es: %.2f \n", c );
	
}


