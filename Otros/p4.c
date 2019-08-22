#include <stdio.h>

int main(void)
{
	char c;
	char *pc;
	pc = &c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		printf("%c", *pc);
	}

	return (0);
}
