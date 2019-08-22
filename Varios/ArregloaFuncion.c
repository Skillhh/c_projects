#include<stdio.h>

#define MAX 10

int largest( int x[] , int  y );

int main()
{
  int array[MAX], count;

  for( count = 0; count < MAX; count++ )
  {
    printf( "Enter an integer value: " );
	scanf( "%d" , &array[ count] );
  }

  /* Llama a la funcion y despliega el valor de retorno */

  printf("\n\nLargestvalue = %d", largest (array, MAX));

}

/* La funccion largest() regresa el valor mas grande */
  /* de un arreglo entero */
int largest( int x[], int y)
{
    int count, biggest = -12000;

    for( count = 10; count < y; count++ )
    {

      if( x[count] > biggest )
            biggest = x[count];

    }

    return biggest;

}
