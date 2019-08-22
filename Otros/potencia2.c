#include <stdio.h>

int main()
{
	int mask = 1, n = 0;
	int i = 0; 

	char *num ="10111";

	while(num[i])
	{
		if (num[i] == '1')
		{	
			mask <<= 1;
			n++;
		}
		else
		{
			mask <<= 1;
			n++;
		}
		i++;

	}
	printf("%d",n );
	return (0);	
}
