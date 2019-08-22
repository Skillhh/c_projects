#include <stdio.h>


int main()
{
	int  i, fib;
	i = 1;
	fib = 1;

	while(i < 10)
	{
		printf("%d ", fib);
		fib = fib + i;
		i++;	
	}


	return 0;
}
