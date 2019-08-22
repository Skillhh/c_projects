#include<stdio.h>

int main()
{
    int n, facto, i;

    printf("Por favor ingrese un numero positivo: ");
    scanf("%d", &n);

    facto = 1;

    for( i = 1; i <= n; i++ )
    {
        facto = i * facto;
    }
    if( n < 0 )
    {
        printf( "\n%d es negativo! Finalizando.. \n" );
    }
    else
    {
        printf("\nFactorial de %d es: %d\n", n, facto);
    }
    return 0;
}
