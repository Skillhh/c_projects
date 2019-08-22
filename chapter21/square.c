/* Recibe un numero y despliega su cuadrado. */

#include<stdio.h>
#include "calc.h"

int main(){
	int x;

	printf("Enter an integer value: ");
	scanf("%d", &x);

	printf("\nThe square of %d is %ld.\n", x, sqr(x));
}
