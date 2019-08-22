#include<stdio.h>

void print_letter2( void );

int main()
{
    int ctr;

    char letter1 = 'x';

    for( ctr = 0; ctr < 10; ctr++ )
    {
        printf("\n%c ", letter1 );
        print_letter2();
    }
    return 0;
}

void print_letter2( void )
{
    char letter2 = '=';

    for( int ctr = 0; ctr < 2; ctr++ )
        printf("%c", letter2 );
}

