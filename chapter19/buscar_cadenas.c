#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 20

int comp(const void *s1, const void *s2);

int main(){

	char *data[MAX], buf[80], *ptr, *key, **key1;
	int count;

	/* Recibe una lista de palabras. */
	printf("Enter %d words, perssing Enter after each.\n", MAX);

	for(count = 0; count < MAX; count++){
		printf("Word %d: ", count+1);
		gets(buf);
		data[count] = malloc(strlen(buf)+1);
		strcpy(data[count], buf);
	}

	/* Ordenar las palabra( de hecho, ordena los apuntadores).*/
	qsort(data, MAX, sizeof(data[0]), comp);

	/* Despliega las palabras ordenadas. */
	for(count = 0; count < MAX; count++)
		printf("\n%d: %s", count+1, data[count]);

	/* Recibe una clave que se ha de buscar */
	printf("\n\nEnter a searchc key: ");
	gets(buf);

	/* Ejecuta la busqued. Primero hace que key1 sea un apuntador */
	/* al apuntaor de la clave de busqueda. */

	key = buf;
	key1 = &key;
	ptr = bsearch(key1, data, MAX, sizeof(data[0]), comp);

	if(ptr != NULL )
		printf("%s found.\n", buf);
	else
		printf("%s not found.\n", buf );
}

int comp(const void *s1, const void *s2){
	return(strcmp( * ( char ** )s1, * ( char ** )s2));
}
