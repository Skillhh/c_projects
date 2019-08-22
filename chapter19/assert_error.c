#include<stdio.h>
#include<assert.h>

int main(){

	int x;

	printf("\nEnter an integer value: ");
	scanf("%d", &x);

	assert(x);

	printf("You entered %d. \n", x);

}

