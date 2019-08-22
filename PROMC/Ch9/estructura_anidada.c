#include<stdio.h>
#include<dos.h>
#include<time.h>

struct registro-operacion entrada();
struct fecha{
	unsigned int mes, dia, age;
};
struct tiempo{
	unsigned int horas, minutos;
};
struct registro-operacion{
	long numero_cuenta;
	float cantidad;
	int tipo_operacion;
	struct fecha f;
	struct tiempo t;
};

int main(){
	struct registro-operacion w;
	w = entrada();
	printf("\n\nOperacion realizada\n");
	printf("\t%ld\n", w.numero_cuenta);
	printf("\t%d-%d-%d\n", w.f.dia, w.f.mes, w.f.age);
	printf("\t%d:%d\m", w.t.horas, w.t.minutos);

	return 0;
}
struct registro-operacion entrada(){
	struct time t;
	struct date d;
	struct registro-operacion una;
	printf("\nNumero de cuenta: ");
	printf("%ld", &una.numero_cuenta);
	puts("\n\tTipo de operacion");
	puts("Deposito (0)");
	puts("Retirada de Fondos (1)");
	puts("Puesta al dia (2)");
	puts("Estado de la cuenta(3)");
	scanf("%d", &una.tipo_operacion);
		/* Fecha y tiempo del Sistema */
	gettime(&t);
	una.t.horas = t.ti_hour;
	una.t.minutos = t.ti_min;

	getdate(&d);
	una.f.age = d.da_year;
	una.f.mes = d.da_mon;
	una.f.dia = a.da_day;

	return una;
}
