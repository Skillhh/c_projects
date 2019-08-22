/*

SIZEF.C - Programa para obtener el tamaño de los tipos de 
variables de C en bytes  */

#include<stdio.h>

int main()
{
    
    printf("\nA. Char is %d bytes", sizeof( char ));
    printf("\nB. Int  is %d bytes", sizeof( int ));
    printf("\nC. Short is %d bytes", sizeof( short ));
    printf("\nD. Long is %d bytes", sizeof( long ));
    printf("\nE. Unsigned Char is %d bytes", sizeof( unsigned char ));
    printf("\nF. Unsigned Int is %d bytes", sizeof( unsigned int ));
    printf("\nG. Unsigned Short is %d bytes", sizeof( unsigned short ));
    printf("\nH. Unsigned Long is %d bytes", sizeof( unsigned long ));
    printf("\nI. Float is %d bytes", sizeof( float ));
    printf("\nJ. Double is %d bytes", sizeof( double ));

    return 0;
}
