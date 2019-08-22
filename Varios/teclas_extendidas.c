#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

int ext_key(void);

int main(){

	int ch;

	puts("Ingrese cualquier tecla de Extencion o F1 para salir del programa.");

	while(1){

		ch = ext_key();

		if( ch == 59 )
			break;
		else
			printf("\nEl codigo de la tecla es: %d", ch);

	}
}

int ext_key(void){

	int ch;

	while((ch = getch()) != 0 )
		;

    return getch();
}
