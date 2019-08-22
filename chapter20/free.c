#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BLOCKSIZE 30000

int main(){

	void * ptr1, * ptr2;

	/* Asigna un bloque. */
	ptr1 = malloc(BLOCKSIZE);

	if(ptr1 != NULL)
		printf("\nFirst allocation of %d bytes successful.", BLOCKSIZE);
	else{
		printf("\nAttempt to allocate %d bytes failed.", BLOCKSIZE);
		exit(1);
	}

	/* Tarta de asignar otro bloque. */
	ptr2 = malloc(BLOCKSIZE);

	if(ptr2 != NULL){
		/* Si la asignacion es satisfactoria imprime un mensaje y termina. */
		printf("\nSecond allocation of %d bytes succesful.\n", BLOCKSIZE);
		exit(0);
	}
	/* Si no es satisfactoria libera el primer bloque y reintenta. */
	printf("\nSecond attempt to allocate %d byte failed.\n", BLOCKSIZE);
	free(ptr1);
	printf("\nFreeing first bloxk.");

	ptr2 = malloc(BLOCKSIZE);

	if(ptr2 != NULL)
		printf("\nAfter free(), allocation of %d bytes successful.\n", BLOCKSIZE);



}
