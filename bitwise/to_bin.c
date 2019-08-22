#include <stdio.h>

int main()
{
	int up = 0, i = 0,j, arr[1024] ;
	unsigned int num = 1024;
	unsigned int mask = 0x8000;

	printf("%d\n", sizeof(unsigned long int));
	
	while (mask != 0)
		{
			if ((num & mask) > 0)
			{
				up = num & mask;
				break;
			}
			mask >>= 1;
		}

	mask = up;
	
	if (num != 0)
	{
		while (mask != 0)
		{
			if ((num & mask) == 0)
			{
				arr[i] = 0;
				putchar('0');
			}
			else
			{
				arr[i] = 1;
				putchar('1');
			}
			mask = mask >> 1;
			i++;
		}
	}
	else
		putchar('0');

	putchar('\n');
	printf("\n%d\n", i);
	printf("\n%d", arr[0]);
	int p = 9, value = 0;
/*	for(j = 1; j <= p; j++)
	{
		printf("%d", j);
		value = arr[j];
		break;
	}*/
//	printf("\n%d %d", j, value);
}
