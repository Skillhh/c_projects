#include<stdio.h>

int main()
{
    int intarray[100];
    float floatarray[100];
    double doublearray[100];

    printf("\nSize of int = %d bytes", sizeof(int));
    printf("\nSize of short = %d bytes", sizeof(short));
    printf("\nSize of long = %d bytes", sizeof(long));
    printf("\nSize of float = %d bytes", sizeof(float));
    printf("\nSize of double = %d bytes", sizeof(double));

    /* Despliegael tamaño  */
    printf("\nSize of intarray = %d bytes", sizeof(intarray));
    printf("\nSize of floatarray = %d bytes", sizeof( floatarray ));
    printf("\nSize of doudblearray = %d bytes", sizeof(doublearray));
}