#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int suma_arreglo(int arreglo_1[], int arreglo_2[] );

int main()
{
    int i;

    int a[MAX], b[MAX], c[MAX];
    int *p_arreglo;

    printf("\n ****** Creando dos Arreglos ****** \n\n");
    for( i = 0; i < MAX;  i++ )
    {
        a[i] = rand()%101;
        b[i] = rand()%101;
    }

    for( i = 0; i < MAX; i++ )
    {
        printf("Arreglo_1[%d] = %d \tArreglo_2[%d] %d\n", i, a[i], i, b[i]);
    }

    printf("\n ****** Resultado de la Suma ****** \n");

    suma_arreglo(a,b);



}
int suma_arreglo(int arreglo_1[], int arreglo_2[] )
{
    int i, y = 10;
    int arreglo_3[y];
    int *p_arreglo;

    for( i = 0; i < y; i++ )
    {

        arreglo_3[i] = arreglo_1[i] + arreglo_2[i];

    }

    p_arreglo = arreglo_3;
    printf("\n");

    for( i = 0; i < y; i++ )
    {
        printf("Arreglo_3[%d] = %d\n", i, *p_arreglo++);
    }

}
