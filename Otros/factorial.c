#include <stdio.h>

int fact(int n);

int main(void)
{
	int num = 5;
	int res = 0;
	res = fact(num);
	printf("%d\n", res);

	return (0);
}
int fact(int n)
{
	int res = 0;
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}

	res =  n * fact(n - 1);
	return res;
}
