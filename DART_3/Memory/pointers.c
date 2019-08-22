#include<stdio.h>

int main(){

	int a = 42;
	double d = 58.394;
	char c = 'r';
	int * address_A = &a;
	printf("Address of a: %p\n", address_A);
	double * address_D = &d;
	printf("Address of d: %p\n");
	char *  address_C = &c;
	printf("Addres of c: %p\n");

	return 0;
}
