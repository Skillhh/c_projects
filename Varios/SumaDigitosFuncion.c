#include<stdio.h>

int sumOfDigits( int );

int main()
{
    int numero = 0, suma = 0;
    int resultado = 0;

    scanf("%d", &numero);

    //resultado = ;

    printf( "%d", sumOfDigits( numero ));

    return 0;
}
int sumOfDigits( int x )
{
     if( x < 10 )
     {
        return x;
     }
     else
     {
         return ( x % 10 + sumOfDigits( x  / 10 ) );
     }


}

