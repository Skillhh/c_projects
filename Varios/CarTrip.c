#include<stdio.h>

int main()
{
    int     passengers;
    double  gas,  costoTotal, valorCompartido  ;

    printf("Ingrese numero de pasajeros: ");
    scanf("%d", &passengers);
    printf("Ingrese el costo de la gasolina: ");
    scanf("%lf", &gas);

    if( passengers != 0 )
        costoTotal = 1 + gas;
    else
        costoTotal =  0 + gas;

    valorCompartido = costoTotal / ( passengers + 1 );
    printf("El valor a compartir es: %.2lf", valorCompartido);

    return 0;
}
