/* Demuestre el paso a una funcion de un apuntador a */
/* un arreglo multidimensionl. */
#include<stdio.h>

void printarray_1( int (*ptr)[4] );
void printarray_2( int (*ptr)[4], int n );

int main(){

    int multi[3][4] = { { 1, 2, 3, 4 },
                        { 5, 6, 7, 8 },
                        { 9, 10, 11, 12 }};
    /* ptr es un apuntador a un arreglo de 4 enteros. */

    int (*ptr)[4], count;

    /* Hace que ptr apunte al primer elemeto de multi */

    ptr = multi;
    
    /* En cada ciclo, ptr es incremento para que apunte al siguiente */
    /* elemento de multi (el siguiente arreglo de enteros de 4 elementos) */

    for( count = 0; count < 3; count++ )
        printarray_1(ptr++);

    puts("\n\nPress a key...");
    getchar();

    printarray_2(multi,3);

}
void printarray_1( int (*ptr)[4] ){
    /* Imprime los elementos de un solo arreglo entero de 4 elementos */
    /* p es un apuntador a tipo int. Se debe usar un modificador de tipo */
    /* para hacer que p sea igual a la direccion de ptr. */

    int *p, count;
    p = ( int * )ptr;

    for( count = 0; count < 4; count++ )
        printf("\n%d", *p++);

}

void printarray_2( int (*ptr)[4], int n){
    /* Imprime los elementos de un arreglo entero de un n por 4 elementos. */

    int *p, count;
    p = (int *)ptr;

    for( count = 0; count <( 4 * n); count++)
        printf("%d\n", *ptr++);

}


