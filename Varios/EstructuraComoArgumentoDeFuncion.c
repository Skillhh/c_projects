/* Demuestra el paso de una estructura a una funcion */
#include<stdio.h>

/* Declara y define uan estructura para guardar los datos. */
struct data{
	float amount;
	char fname[30];
	char lname[30];
} rec;

/* El prototipo  de funcion. la funcion no tiene valor de retorno. */
/* y toma una structura de tipo de data como su unico argumento. */

void print_rec( struct data x );

int main()
{
	/* Recibe los datos del teclado */
	printf("Enter the donor's first and last name,\n");
	printf("separated by a space: ");
	scanf("%s %s", rec.fname, rec.lname);
	
	printf("\nEnter the donation amount: ");
	scanf("%f", &rec.amount);
	
	/* Llama la funcion de desplegado. */
	print_rec( rec );	
	
}
/* Funcion con una estructura como parametro */
void print_rec( struct data x )
{
	printf("\nDnor %s %s gave $%.2f.", x.fname, x.lname, x.amount);
}

