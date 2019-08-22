/* Demostracion de los operadores de desplazamiento */

#include<stdio.h>

int main(){

	unsigned char y, x = 255;
	int count; 

	printf("Decimal\t\tshift left by\tresult\n");

	for( count = 1; count < 8; count++ ){
	
		y = x << count;
		printf("%d\t\t%d\t\t%d\n", x, count, y);
	}
	char z;

	z = ~x;
	printf("Valor de x = %d, valor de ~x = %d.", x, z);
}

