#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *numbers;
    numbers = ( int * ) malloc( 50 * sizeof(int) );
    printf( "%d", numbers );
}
