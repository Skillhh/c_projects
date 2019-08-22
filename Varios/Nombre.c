#include<stdio.h>
/* Prototipo */
int suma(int a, int b);

int main()
{
    // Ingreso de datos
    int x, y, z;

    printf("Escribe un numero: ");
    scanf("%d", &x);

    printf("Escribe otro numero: ");
    scanf("%d", &y);

    z=suma( x, y);

    printf("El resultado de la suma es: %d\n", z);

}
/* Funcion que regresa el producto*/
int suma(int a, int b)
{
    /*Retorno de la funcion*/
    return(a+b);
}