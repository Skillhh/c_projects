#include <stdio.h>
/**
 * 
 *
 */
int _pow(int b, int exp);
int main()
{

	char *str = "101";
	int i = 0, exp = 0;
	int add = 0;
	
	while (str[i])
		i++;

	for (i-=1; i >= 0; i--)
	{	
		if (str[i] == '0' || str[i] == '1')
		{
			if (str[i] == '1')
			{
				add += _pow(2, exp);
				exp++;
			}
			else
				exp++;
		}
		else
		{
			add = 0;
		}
	}	
	printf("\n%d", add);	
	return (0);

}

int _pow(int b, int exp)
{
	int i = 0;
	int	res = 1;
	if (exp == 0)
	{	
		return (res);
	}
	while (i < exp)
	{
		res *= b;
		i++;
	}
	return (res);
}
