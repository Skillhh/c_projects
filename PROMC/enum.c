#include<stdio.h>

enum dias_semana{
	LUNES,
	MARTES = 24,
	MIERCOLES,
	JUEVES,
	VIERNES,
	SABADO,
	DOMINGO
};

int main(){
	
	enum dias_semana dia;
	dia = LUNES;
	printf("%d", dia);

	return 0;
}
