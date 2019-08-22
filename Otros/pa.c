#include <stdio.h>

int main(void)
{
	int lista[5] = {10, 20, 30, 40, 50};

	printf("lista[0] = %d\n", lista[1]);
	printf("lista = %d", *(lista+1));

	return (0);
}
