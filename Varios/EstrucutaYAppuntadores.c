#include<stdio.h>
#include<stdlib.h>

//Imprimir mensajes desde apuntadores desde una estructura
struct msg{
    char p1[50];
    char *p2;
} misptr;
//Imprimir Valoresde Entereros desde Apuntadores en Estrucutras
struct datos{
    int *valor;
    int *tasa;

} primera;

int main(void)
{
    int costo = 20;
    int interes = 50;

    //Apuntadores de tipo entero
    primera.valor = &costo;
    primera.tasa = &interes;

    //Apuntadores de tipo string
    strcpy( misptr.p1 , "Aprenda C por ustede mismo en 21 dias");
    misptr.p2 = "Por Prentice Hall";

    printf("\nApuntador: %d variable costo: %d\n", *primera.valor, costo );

    printf("\n%s \\ %s\n", misptr.p1, misptr.p2 );


    return 0;
}
