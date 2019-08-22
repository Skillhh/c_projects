#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char buf[80], * message;

	/* Recibe una cadena. */
	puts("Enter a line of text.");
	gets(buf);

	/* Asigna el bloque inicial y copia la cadena a el */
	message = realloc(NULL, strlen(buf)+1);
	strcpy(message, buf);

	/* Depsliega el mensaje. */
	puts(message);

	/* Recibe otra cadena de usuario. */
	puts("Enter another line of text.");
	gets(buf);

	/* Aumenta la asignacion y luego le concatena */
	message =  realloc(message, (strlen(message)+strlen(buf)+1));
	strcat(message, buf);

	/* Despliega el nuevo mensaje. */
	puts(message);

}
