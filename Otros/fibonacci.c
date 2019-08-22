#include <stdio.h>

int fibonacci(int);

int main(void)
{
	int i = 0;
	int res = 0;
	
	for (i = 0; i < 10; i++)
	{
		res = fibonacci(i);
		printf("%d ", res);
	}

	return (0);
}
int fibonacci(int a)
{
	if(a == 0)
		return 0;
	if (a == 1)
		return 1;

	return fibonacci(a -1) + fibonacci(a - 2);	
}
