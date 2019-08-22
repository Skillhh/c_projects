#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i = 0, mask = 0, index = 1;
	int *num;
	int n = 98;

	num = &n;
/*
	mask <<= index;
	*num = *num & mask; 
*/
	while (i < index)
	{
		mask <<= i;
		*num = *num & mask;
		printf("%d\n", *num);
		i++;
	}

//	printf("%d", *num);

	printf("%d", mask);
	return (0);
}
