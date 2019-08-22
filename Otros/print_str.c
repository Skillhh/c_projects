#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - entry point
 * @ac: numbers of arguments
 * @av: pointer of each argument
 * Return: a pointer of all arguments concatenated
 */
int main()
{
	int i, x, y = 0, st = 0;
	char *ar;
	char *tab = "      Holberton School         #cisfun      ";	
	char **arr;
	
	for (i = 0; tab[i]; i++)
	{
/*		for (x = 0; tab[i][x]; x++)*/
		if(tab[i] != ' ')
			y++;
	}

	st = y;
	x = strlen(tab);
	printf("%d\n", x);
	printf("%d\n", st);

	arr = (char *) malloc((st + 1)* sizeof(char));
	if (ar == NULL)
		return (0);
	y = 0;

	for (i = 0; tab[i]; i++)
	{
		if (tab[i] != ' ')
			arr[y++] = tab[i];
			arr[y + 1] = '\0';

	/*
		for ( x = 0; argv[i][x]; x++, y++)
		{
			ar[y] = argv[i][x];
			ar[y + 1] = '\0';
		}
		ar[y++] = '\n';*/

	}
	printf("%s", arr);

	return (0);
}
