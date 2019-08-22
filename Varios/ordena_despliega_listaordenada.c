/* Recibe una lista de cadenas desde el teclado, las ordena */
/* y luego las despliega en la pantalla */
#include<stdio.h>
#include<string.h>

#define MAXLINES 25

int get_lines( char *line[] );
void sort( char *p[], int n );
void print_strings( char *p[], int n );

char *lines[MAXLINES];

int main()
{
	/* Lee las lineas desde el teclado. */
	int number_of_lines;

	number_of_lines = get_lines( lines );

	if( number_of_lines < 0 )
	{
		puts(" Memory allocation error" );
		exit(-1);
	}

	sort( lines, number_of_lines );
	print_strings( lines, number_of_lines );

}

int get_lines( char *lines[] )
{
	int n = 0;

	char buffer[80]; /* Almacenamiento temporal para cada linea. */

	puts( "Enter one line at time; enter a blank  when done." );

	while( ( n < MAXLINES ) && ( gets( buffer ) != 0 )  && ( buffer[0] != '\0') )
	{
		if( ( lines[n] = (char *)malloc( strlen(buffer)+1 ) ) == NULL)
			return -1;
		strcpy( lines[ n++ ], buffer );
	}
	return n;

}/* Fin de get_lines() */

void sort( char *p[], int n )
 {
	int a, b;
	char *x;

	for( a = 1; a < n - 1; a++ )
	{
		for( b = 0; b < n - 1; b++ )
		{
			if( strcmp( p[b], p[b+1] ) > 0 )
			{
				x = p[b];
				p[b] = p[b+1];
				p[b+1] = x;
			}
		}
	}
}

void print_strings( char *p[], int n )
{
	int count;

	for( count = 0; count < n; count++ )
		printf( "\n%s", p[count]);

}





