#include<stdio.h>

#define MAX 10

//Prototipo del total de la suma de los arreglos
int total_arreglo( int arreglo_1[], int arreglo_2[]);

int main()
{
    //Declaro iterador del bucle for
    int  i;
    //Declaro dos Arreglos
    int  a[MAX],  b[MAX];
    //Bucle para ingresar valores a los arreglos con numeros de forma aleatoria con la funcion rand
    for( i = 0; i < MAX; i++ )
    {
        a[i] = rand();
        b[i] = rand();
    }

    printf("\n\nLa suma total de los arreglos es: %d\n\n",total_arreglo( a, b ));

}

int total_arreglo( int arreglo_1[], int arreglo_2[] )
{

    int i, y = 10, count_1, count_2, suma_ab;

    for( i = 0; i < y; i++ )
    {
        count_1 = count_1 + arreglo_1[i];
        count_2 = count_2 + arreglo_2[i];
    }
    suma_ab = count_1 + count_2;

    return ( suma_ab );
}
