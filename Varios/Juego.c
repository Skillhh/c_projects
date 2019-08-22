#include<stdio.h>

int main()
{
    int adivina, numero;
    int intentos;

    scanf("%d", &numero);

    while( adivina != numero )
    {

        intentos++;
        scanf("%d", &adivina);
        if( adivina < numero )
            printf("\nit is more\n");
        if( adivina > numero )
            printf("\nit is less\n");

    }
    printf("Number of tries needed: ");
    printf("%d\n",intentos);


    return 0;
}

