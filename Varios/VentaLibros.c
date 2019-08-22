#include<stdio.h>

int main()
{
    double dinero, precio, cantidad;

    int Icantidad;

    printf("Ingrese el monto y precio del libro: ");
    scanf("%lf %lf", &dinero, &precio);

    cantidad =  dinero / precio;

    Icantidad = (int)cantidad;

    printf( "%d", Icantidad);

}
