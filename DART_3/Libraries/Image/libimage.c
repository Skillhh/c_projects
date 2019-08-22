#include<stdio.h>

void printLibimage(void){
    printf("Creando Ejecutable:\n");
	printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra superimage.c -o superimage\n");    
}
void printSuperimage(void){
	printf("Creando Libreria\n");
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c libimage.c -o libimage.so\n");
} 
