#include<stdio.h>

int main()
{
	int  i, repeticion, enginePower, resistance, weight, height;
	int  resultado  = 0, a = 0 ;
	
	printf("Ingrese las veces a repetirse: ");
	scanf( "%d", &repeticion );	
	
	for( i = 0; i < repeticion;  i++ )
	{
		
		printf( "Ingrese  Potencia , resistencia, peso y altura: " );
		scanf( "%d %d %d %d",  &height, &weight, &enginePower, &resistance );
		
		a=  ((enginePower + resistance) * (weight - height));
		
		resultado = resultado + a;
		
	}
	
	printf( "%d\n\n", resultado );
	
	return 0;
}