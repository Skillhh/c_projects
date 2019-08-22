#include <stdio.h>

int main()
{
	int i = 0, mask = 0;
	char *num = "10111";

	while (num[i])
	{
		if (num[i] == '1')
		{
			mask <<= 1;
			mask = mask | -1;
		}
		else
		{
			mask <<= 1;
		}i++;
	}
	printf("%d", mask);
	return (0);
}
