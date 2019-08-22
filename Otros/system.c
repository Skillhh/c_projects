#include <stdio.h>
#include <stdlib.h>

int main( void )
{

	char input[40];
	while (1)
	{

		printf("$ ");
		gets(input);

		if (input[0] == EOF)
			exit(0);

		system(input);
	}
	return 0;
}
