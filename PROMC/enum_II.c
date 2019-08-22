#include<stdio.h>
#include<stdlib.h>

enum dias_sem{
	LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO
};

int main(){

	enum dias_sem dia;

	for(dia = LUNES; dia <= DOMINGO; dia++){
		printf("%d", dia);
		getchar();
	}

	return 0;
}
