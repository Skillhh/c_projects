#include <stdio.h>
#include <stdlib.h>
int main(int argc,  char *argv[])
{
	int i, x, y = 0;

	char *t = NULL;

	for (i = 0; i < argc; i++)
	{
		if (i != 0)
		{
			for (x = 0; argv[i][x]; x++)
			{
//				putchar(argv[i][x]);
//				printf("%d", x);
				y++;
			}
			putchar('\n');
		}
	}
//	printf("%d",y);

	t = (char *) malloc(y * sizeof(char));

	y = 0;
	
	for (i = 0; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			t[y++] = argv[i][x];
		}
		if (i < argc - 1 )
			t[y++] = '\n';	
	}
	printf("%s", t);
	return (0);
}
