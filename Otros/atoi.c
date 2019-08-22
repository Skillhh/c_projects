#include <stdio.h>

int _atoi(char *s);

int main(void)
{
	
	int n;

	n = _atoi("-4578");
	printf("\n%d\n", n);
	
	return 0;
}
int _atoi(char *s)
{
	int res = 0;
	int tmp = 0;
	/* @sign:  content '-' character but i need 
	 * to initialize positive way. 
	 */
	int sign = 1;
	int i = 0, j;
	

	if (s[0] == '-')
	{
		sign = -1;
		i++;

		for (; s[i] != '\0'; ++i)
		{
			tmp = s[i] - '0';
			res = res * 10 + tmp;
		}

	}
	else 
	{
		for (j = 0; s[j] != '\0'; j++)
		{
 			if (s[j] >= '0' || s[j] <= '9')
			{
				tmp = s[j] - '0';
				res = res * 10 + tmp;
			}

		}

	}
	

	return sign * res;
	
}
