#include<stdio.h>

int main()
{
    int a[10], aux;

    
    puts( " **** Ingrese 10 numeros ****" );

    for( int i = 0; i < 10; i++ )
    {
        printf("Ingrese numero %d: ",i+1 );
        scanf( "%d", &a[i]);

    }
    for(int i = 0; i < 10; i++)
    {
        for( int j = i+1; j < 10; j++ )
        {
            if( a[i] < a[j] )
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }        
    }
    for( int i = 0; i < 10; i++ )
    {
        printf( "%d ", a[i] );
    }
    printf( "\n" );
    return 0;
}