
/* Demuestra el avance paso a paso por arreglo de estructura */
/* usando notacion de apuntadores */
#include<stdio.h>

#define MAX 4

/* Declara una estructura , y luego declara e inicializa */
/* un arreglo de cuatro estructuras */

struct part{
	int number;
	char name[10];
} data[MAX] = { 1, "Smith",
				2, "Jones",
				3, "Adams",
				4, "Wilson" };
			
/* Declara un apuntador al tipo part y una vaariable de contador */

struct part *p_part;

int main()
{
	/* Inicializa el apuntador al primer elemento del arreglo. */
	int count;
	p_part = data;
	
	/* Hace ciclo por el arreglo incrementado el apuntador */
	/* n cada iteracion. */
	
	for( count = 0; count  < MAX; count++ )
	{
		printf("\nAt address %d: %d %s", p_part, p_part -> number, p_part -> name );
		p_part++;
	}	
	
	return 0;
}
