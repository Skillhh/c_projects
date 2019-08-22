/* Recibe una lista e cadenas desde el teclado, las ordena */
/* en forma ascendente o descendente y luego las despliega */
/* en la pantalla */
#include<stdio.h>
#include<string.h>

#define MAXLINES 25

int get_lines( char *lines[] );
void sort( char *p[], int n, int sort_type );
void print_strings(char *p[], int n);
int alpha( char *p1, char *p2);
int reverse( char *p1, char *p2);

char *lines[MAXLINES];

int main()
{
	int number_of_lines, sort_type;

	/* lee las lineas desde el teclado. */
	number_of_lines = get_lines(lines);

	if( number_of_lines < 0 )
	{
		puts("memory allocation error ");
		exit(-1);
	}

	puts("Enter 0 for reverse order sort, 1 for alphavetical: ");
	scanf("%d", &sort_type);
	sort(lines, number_of_lines, sort_type);
	print_strings(lines, number_of_lines);
}
int get_lines( char *lines[] )
{
	int n = 0;
	char buffer[80]; /* Almacenamiento temporal para cada linea. */
	puts("Enter on line at time; enter a blank when done. ");

	while(n < MAXLINES && gets(buffer) != 0 && buffer[0] != '\0')
	{
		if( (lines[n] = (char * )malloc( strlen(buffer)+1)) == NULL )
		return -1;
		strcpy( lines[n++], buffer);
	}
	return n;
}/* Fin de get_lines() */
void sort( char *p[], int n, int sort_type)
{
	int a, b;
	char * x;
	/* El apuntador a funcion */
	int (*compare)(char *s1, char *s2);

	/* Asigna valor inicial al apuntador para que apunte a la funcion */
	/* de comparacion adecuada, dependiendo del argumento sort_type */

	compare = (sort_type) ? reverse : alpha;

	for ( a = 1; a < n; a++ )
	{
		for( b = 0; b < n - 1; b++ )
		{
			if( compare( p[b], p[b+1] > 0))
			{
				x = p[b];
				p[b] = p[b+1];
				p[b+1] = x;
			}
		}

	}
} /* FIn de sort() */
void print_strings( char *p[], int n )
{
	int count;

	for( count = 0; count < n; count++ )
	{
		printf("\n%s ", p[count]);
	}
}

int alpha( char *p1, char *p2 )
/* COmparacion alfabetica.  */
{
	return(strcmp(p2, p1));
}
int reverse( char *p1, char *p2 )
/* Comparacion alfabetica inversa */
{
	return( strcmp(p1, p2));
}
