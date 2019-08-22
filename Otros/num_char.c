#include <stdio.h>

int print_number(int n)
{
	int i, j = 1;
	if (n == 0)
		return (putchar('0'));
	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	
	i = n;
	
	while(i > 9)
	{
		i /= 10;
		j *= 10;
	}
	while (j > 0)
	{
		putchar(((n / j) % 10) + 48);
		j/= 10;		
	}
}
int main(void)
{
    print_number(0);

	return (0);
}
