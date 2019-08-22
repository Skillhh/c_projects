#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char cad[121], *ptr;
	int lon, i;

	puts("\nIntroduce a text line: ");
	gets(cad);

	lon = strlen(cad);
	ptr = (char *) malloc((lon + 1) * sizeof(char));
	if (ptr == NULL)
	{
		puts("Error en la asignacion de memoria");
		return -1;
	}
	for (i = 0; i < lon; i++)
	{
		ptr[i] = cad[i];
	}
	printf("ptr = %s", ptr);
	free(ptr);
	return (0);
}
