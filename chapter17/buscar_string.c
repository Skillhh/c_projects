#include<stdio.h>
#include<string.h>

int main(){
	
	char * loc, buf[80];
	int ch;

	/* Recibe la cadena y el caracter */
	printf("Enter the string to be searched: ");
	gets(buf);
	printf("Enter the character to search for: ");
	ch = getchar();

	/* Ejecuta la busqueda. */
	loc = strchr(buf, ch);

	if( loc == NULL )
		printf("The character %c was not found.", ch);
	else
		printf("The character %c was found at position %d.", ch, loc-buf);

}
