#include<stdio.h>

int potencia( int a);

int main()
{
	printf("****** Funcion Recursiva ******");
	int x = 4, y =9 ;
	printf("\n3 elevado a la %d is %d\n", x, potencia(x));

	printf("\n3 elevado a la %d is %d\n", y , potencia(y));
	
}
int potencia( int a)
{
	if( a <1 )
		return (1);
	else
		return( 3 * potencia( a - 1 ) );
}