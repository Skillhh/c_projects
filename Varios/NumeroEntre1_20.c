#include<stdio.h>

int main()
{
    int x, y;
    x =0;
    y=0;

    printf("Digite un numero: ");
    scanf( "%d", &x );

    if(x>=1 && x<=20)
    {
        y = x;
        printf( "El valor de Y  es igual al de  X  : %d", y );
    }else 
        printf( " El valor de Y es:  %d", y );

    return 0;
}
