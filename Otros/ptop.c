#include <stdio.h>

int main(void)
{	
	int array_size = 10;
	int *a;
	int i;

	a[array_size];

	for (i = 0; i < array_size; i++)
	{
		*(a + 1) = i;
		printf("%d ", a[i]);
	}

	return 0;
}
