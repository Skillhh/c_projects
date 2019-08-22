#include <stdio.h>

int main() {

    /* Declara un buffer para la entrada y una variable de contador. */
    char buffer[81];
    int ctr;

    /* Recibe una linea de texto */
    puts( "Ingrese una linea de texto: " );
    gets( buffer );

    /* Va por la cadena desplegando solamente */
    /* los caracteristicas que no son vocales minusculas. */

    for( ctr = 0; buffer[ctr] != '\0' ; ctr++ )
    {
        /* Si el caracter es una vocal minuscula
         * regrese al ciclo sin desplegarla */
        if( buffer[ctr] == 'a' || buffer[ctr] == 'e' || buffer[ctr] == 'i' || buffer[ctr] == 'o' || buffer[ctr] == 'u' )
                continue;

        /* Si no es una vocal la despliega. */
        putchar(buffer[ctr]);

    }

    return 0;
}