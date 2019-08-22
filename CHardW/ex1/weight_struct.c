#include<stdio.h>
/* Declarar una estructura */
struct persona{
	char nombre[30];
	int edad;
	float altura;
	float peso;
};

void main(){
	struct persona mar;
	printf("Size of (persona): %ld.\n",sizeof(mar));
}
