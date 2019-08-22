#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - entry point
 * @ac: numbers of arguments
 * @av: pointer of each argument
 * Return: a pointer of all arguments concatenated
 */
int main(int argc, char **argv)
{
	int i, x, y = 0, st = 0;
	char *ar;

	if (argc == 0 || argv == NULL)
		return (0);

	for (i = 0; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
			y++;
	}
	st = argc + y;

	printf("%d\n", st);

	ar = (char *) malloc((st + 1)* sizeof(char));
	if (ar == NULL)
		return (0);
	y = 0;

	for (i = 0; i < argc; i++)
	{
		for ( x = 0; argv[i][x]; x++, y++)
		{
			ar[y] = argv[i][x];
			ar[y + 1] = '\0';
		}
		ar[y++] = '\n';
	}
	printf("%s", ar);
	return (0);
}
