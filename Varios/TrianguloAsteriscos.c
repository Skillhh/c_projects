#include<stdio.h>

int main(void)
{
    int i, j, t = 0 ;

    printf("Escriba el tamaño del triangulo: ");
    scanf("%d", &t );

    for( i = 0; i < t; i++ )
    {
        for( j = 0; j < t; j++ )
        {
            if( j < i ){
                printf( " * " );
                }
        }
        printf("\n");
    }


    return 0;
}
