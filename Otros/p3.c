#include <stdio.h>

int main(void)
{
	int edad;
	int * p_edad;

	p_edad = &edad;
	*p_edad = 50;

	printf("%d\n", edad);
	printf("%d", *p_edad);

	return (0);
}
