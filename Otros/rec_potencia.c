#include <stdio.h>

int potencia(int, int);

int main(void)
{
	int base = 5;
	int exp = 3;
	int num = 0;
	
	num = potencia(5, 3);

	printf("%d", num);

	return (0);
}
int potencia(int b, int e)
{
	if ( e == 0 )
	{
		return 1;
	}
	else
	{
		return b * potencia(b, e-1);
	}

}
