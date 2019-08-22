#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *cadena;
	int tam;
	tam = ((strlen("Primavera") + 1) * sizeof(char));
	cadena = (char *) malloc(tam);
	strcpy(cadena, "Primavera");
	puts(cadena);

	/* Ampliar l bloque de memoria */

	tam += ((strlen(" en Luciana\n")+1) * sizeof(char));
	cadena = (char *) realloc(cadena, tam);
	strcat(cadena, " en Luciana\n");
	puts(cadena);

	/* Liberacion de memoria */
	free(cadena);
	return (0);
}
