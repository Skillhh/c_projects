#include<stdio.h>

int main()
{
	int i[10], x;
	float f[10];
	double d[10];

	/* Imprime el encabezado de la tabla */
	printf( "\t\tInteger\t\t\t\tFloat\t\t\tDouble" );
	printf( "\n=================================" );
	printf("=======================");

	/* Imprime las direcciones de cada elemento del arreglo */
	for( x = 0; x < 10; x++ )
	{

		printf( "\nElement %d:\t%d\t\t%d\t\t%d", x, &i[x], &f[x], &d[x]);

	}

	printf("\n==================================");
	printf("======================");


	return 0;
}
