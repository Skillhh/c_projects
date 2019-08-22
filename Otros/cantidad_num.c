#include <stdio.h>

int main(void)
{
	int num = 12;

	int i,j;
	int tmp, cant;
	int sign = 1;
	int divr = 10;	
	int dig, cdg;
	
	
	if (num < 0)
	{
		sign *= -1;
	}

	while (cant > 0 )
	{
		cant /= 10;
		printf("%d", cant);
		i++;
	}
	cdg = i -1;
	cant = num;

//	printf("\n%d", divr);
	printf("\n%d", cdg);


	i = 0;
	while ( i < cdg)
	{
		cant = num % 10;
		dig = num / divr;
		num = dig;
		printf("\n%d", cant);
		i++;	
	}

	//printf("\ncantidad digitos: %d", i);
	//printf("\n%d",cant);
		
	return 0;
}
