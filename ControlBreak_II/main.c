#include <stdio.h>

int main() {

    int x;

    printf("Contando de 1 a 10\n");
    /* al no tener condicion en el cclo for se hara que
     * repita siempre */
    for( x = 1;  ; x++ )
    {
        if( x == 10 ) /* Esto revisa para el valor 10 */
        {
            break; /*  Esto termina el ciclo */
        }
        printf( "\n%d", x );
    }

    return 0;
}