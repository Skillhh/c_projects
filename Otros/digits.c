#include <stdio.h>

int main(void)
{
	int a = 23;
	int b = 0;
	int cn = a, i = 0;
	int dvr = 1;
	int res = 0;
	int num = 0;

	while (cn > 0)
	{
		cn /= 10;
		dvr *= 10;
		i++;
	}
	cn = i;
	i = 0;
	while(cn >= 0)
	{
		b = a / dvr;
		res = a % dvr;
		a = res;
		dvr /= 10;
		num = b;
		num = num * 10 +b;
	 	printf("%d", num);
		cn--;
	} 

//	printf("%d\n", cn);
//	printf("%d", dvr);
	return 0;
}
