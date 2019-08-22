#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char hazlo( char x, char y, char z); 

int main()
{
	char a, b, c;
	
	printf( " ****** Conversion de Variables ******\n" );
	printf( "Ingrese dos caracteres: " );
	scanf( "%c", &a);	
	fflush(stdin);
	printf( "Ingrese dos caracteres: " );
	scanf( "%c", &b);
	fflush(stdin);
	printf( "Ingrese dos caracteres: " );
	scanf( "%c", &c);
	fflush(stdin);
	hazlo( a, b, c);
	 
}

char hazlo( char x, char y, char z)
{	
	( int ) x , y, z;
 	float a = x, b = y, c = z; 
	return ( printf( "%.2f %.2f %.2f", a, b, c ) );
}
