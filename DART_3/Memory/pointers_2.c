#include<stdio.h>

int main()
{
	double a = 42.98;
 	double * address_a = &a;
	printf("At the address %p there is \
	the value %.2lf\n", address_a, *address_a);
	char c = 'm';
	char * address_c = &c;
	char d = * address_c;
	* address_a = 32;
	* address_a = * address_a + 1;

	printf("At the address %p there is value %.2lf\n", address_a, * address_a);
	return 0;
}
