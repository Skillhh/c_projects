#include <stdio.h>

int main(void)
{
	char * nom_meses[12] ={ "Enero", "Febrero", "Marzo",
				"Abril", "Mayo", "Junio",
				"Julio", "Agosto", "Septiembre",
				"Octubre", "Noviembre", "Diciembre"};

	int i;

	for (i = 0; i < 12; i++)
	{
		printf("%s\n", *(nom_meses + i));
	}

	return (0);
}
