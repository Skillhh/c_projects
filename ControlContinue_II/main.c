#include <stdio.h>

int main() {

    int x;

    printf( "Imprimmiendo solamente lso numeros pares de 1 a 10\n " );
    for( x = 1; x <= 10; x++)
    {
        if( x % 2 != 0 ) /* Ve si el numero No es par */
            continue;    /* Obtinie la nuebva instancia de x */
        printf( "\n%d", x );
    }
    return 0;
}