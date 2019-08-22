#include<stdio.h>

void imprimir_matriz( char *p[], int n );

int main(){

	char *arreglo[3] = { "Adriana", "Giovanny", "Paula" };

	imprimir_matriz( arreglo, 3);
}
void imprimir_matriz( char *p[], int n ){

	for( int i = 0; i < 3; i++ ){
		printf("%s ", p[i]);
	}
	printf("\n");
}
