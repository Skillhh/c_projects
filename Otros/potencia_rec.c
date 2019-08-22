#include <stdio.h>

int potencia(int base, int exp);

int main(void)
{
	int res;

	res = potencia(5, 2);

	printf("%d", res);

	return (0);
}
int potencia(int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	else
	{
		return base * potencia(base, exp - 1);
	}
}
