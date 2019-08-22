#include<stdio.h>

int main()
{
    int numero = 0, suma = 0, contador = 0;
    int digito = 0;
    scanf("%d", &numero);

    while( numero != 0 )
    {
        digito  = numero % 10;
        numero = numero / 10;
        suma = suma + digito;
        contador++;
    }

    printf("\nEl numero tiene: %d digitos y la suma entre los numeros es %d\n", contador, suma);



}
