#include<stdio.h>

int main()
{
    int peso, cantidad = 0, suma = 0;
    char tipo;
    int terminador = 0;

    scanf("%d", &cantidad);

    for( int i = 0;  i < cantidad; i++)
    {
        peso = 0;

        scanf( "%d %c", &peso , &tipo  );

        if( tipo == 'i' )
        {
             int j;
             peso =  peso * sizeof(j);
        }
        if( tipo == 'c' )
        {
             char c;
             peso =  peso * sizeof(c);
        }
        if( tipo == 'd' )
        {
             double d;
             peso =  peso * sizeof(d);
        }
        if( tipo != 'i' && tipo != 'c' && tipo != 'd' )
        {
            terminador = 1;
            printf("Invalid tracking code type");
            break;
        }
        suma = suma + peso;
    }
    if( terminador == 0 )
    {
         printf("\n%d bytes", suma );
    }

    return 0;
}
