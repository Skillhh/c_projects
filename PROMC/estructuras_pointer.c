#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
struct empleado
{
	char nombre[30];
	int salario;
	char num_telefono[10];
};
struct empleado *create_empleado(char[], long, char[]);
int main(void)
{
	struct empleado *info;
	char emp_nombre[30];
	long emp_salario;
	char emp_telefono[10];

	puts("************ Datos de empleados ***************** ");
	puts("Inrgese nombre: ");
	scanf("%s", &emp_nombre);
	puts("Ingrese salario: ");
	scanf("%ld", &emp_salario);
	puts("Ingrese No telefono: ");
	scanf("%s", &emp_telefono);
	info = create_empleado(emp_nombre, emp_salario, emp_telefono);
	puts("********** Datos completos del empleado ***********");
	printf("Nombre: %s, Salario: %ld, No Telfono: %s.\n",info->nombre,
	       info->salario, info->num_telefono);
	return (0);
}
struct empleado *create_empleado(char emp_nombre[],
				 long emp_salario, char emp_telefono[])
{
	struct empleado *datos;
	datos = (struct empleado *) malloc(sizeof(struct empleado));
	strcpy(datos->nombre, emp_nombre);
	datos->salario = emp_salario;
	strcpy(datos->num_telefono, emp_telefono);
	return (datos);
}
