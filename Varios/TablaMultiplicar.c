#include<stdio.h>

int main(void)
{
	int  a, b ,  c = 0;
	printf( "Ingrese un numero:  " );
	scanf( "%d", &b );
	
	for( a = 0;  a  <= 10;  a++ )
	{
		c= a*b;
		printf("%dx%d = %d\n", a, b , c );		
	}
			
	return 0;
}
