#include<stdio.h>

#define OUT(x) printf(#x " is equal to  %d.", x )

int main(int argc, char **argv){
	int value = 123;

	OUT(value);
	
	printf("\nPrograma %s: (%d) Error al abrir archivo.\n", __FILE__, __LINE__);

	return 0;
}
