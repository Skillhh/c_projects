#include<stdio.h>

int main(void)
{
	int i, cantidad = 0;
	double array_1[10];
	double array_2[10];
	double array_3[10];	
	double total = 0, valor = 0;
	
	
	scanf("%d", &cantidad);
	
	for( i = 0; i < cantidad; i++ )
	{
		scanf("%lf", &valor);
		array_1[i] = valor;
	}
	for( i = 0; i < cantidad; i++ )
	{
		scanf("%lf", &valor);
		array_2[i] = valor;
		
		array_3[i] = array_1[i] * array_2[i];
		total += array_3[i];
	}
	
	printf("%lf", total);
	
	return 0;
}
