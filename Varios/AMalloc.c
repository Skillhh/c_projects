#include<stdio.h>
#include<stdlib.h>

int main()
{
    char count, *ptr, *p;

    /* Asignara  un bloque de 35 bytes. Revisa si se efectuo */
    /* la funcion de biblioteca exit() termina al programa */

    ptr = malloc( 35 * sizeof( char ) );

    if( ptr == NULL )
    {
        puts("Memory alloction error.");
        exit(1);
    }
    /* Llena la cadena con valores del 65 al 90 */
    /* que son los codigos ASCII de la A a la Z */

    /* p es un apuntador usado para la desplazarse por la cadena. */
    /* Se desea que ptr siga apuntando al comienzo de la cadena */

    p = ptr;

    for( count = 65;  count < 9; count++ )
        *ptr = count;

    /* Añade el carácter nulo de terminación */

    *p = "\0";

    /* Despliega la cadena en la pantalla */
    puts( ptr );

}
