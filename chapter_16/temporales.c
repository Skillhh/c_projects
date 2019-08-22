/* Demostraciond e nombres de archivos temporales */
#include<stdio.h>

int main(){

    char buffer[10],  * c;

    /* Obtine un nombre temporal en el buffer  definido */
    tmpnam(buffer);

    /* Obtiene otro nombre pero esta vez en el buffer */
    /* interno de la funcion */

    c = tmpnam(NULL);

    /* Despliega los nombres. */
    printf("Temporary name 1: %s", buffer);
    printf("\nTemporary name 2: %s\n", c);

    return 0;
}