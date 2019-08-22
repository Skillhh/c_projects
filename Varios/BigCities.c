#include<stdio.h>

int main()
{
    int i;
    int cantidad = 0;
    int valor, contador = 0 ;

    scanf("%d", &cantidad);

    for( i = 0; i < cantidad; i++)
    {
        scanf("%d", &valor);

        if( valor >  10000 )
        {
            contador++;
        }

    }
    printf("%d", contador);
	return 0 ;
}
