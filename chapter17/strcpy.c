/* Demuestra a strcpy() */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	char source[] = "The source string.";
	char dest1[80];
	char * dest2, * dest3;
	
	/* La copia a dest es correcta, debido a que dest1 apunta a */
	/* 80 bytes de espacio asignado. */
	printf("\nsource: %s", source);
	strcpy(dest1, source);
	printf("\ndest1: %s", dest1);

	/* Para copiar a dest2 se debe asignar espacio. */
	dest2 = (char *) malloc (strlen(source)+1);
	strcpy(dest2, source);
	printf("\ndest2: %s", dest2);

	/* La copia sin saber haber asignado el destino esta prohibida. */
	/* Lo siguiente puede causa serios problemas. */

	/* strcpy(dest3, source) */
	printf("\n");
	return 0;

}
