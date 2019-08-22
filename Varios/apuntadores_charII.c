#include<stdio.h>

void print_string( char *p[], int n );

int main()
{

	char *message[8] = { "Four", "score", "and", "seven",
			"year", "ago,", "our", "forefathers." };

	print_string( message, 8 );
	getch();

}
void print_string( char *p[], int n )
{
	int count;

	for( count = 0; count < 8; count++ )
	{
		printf("%s ", p[ count ]);
	}
}
