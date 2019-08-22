/** Paso de un arreglo a una funcion . Metodo alterno **/

#include<stdio.h>

#define MAX 10

int largest( int x[]  );

int main()
{

 int array[MAX+1], count;

 /* Recibe del teclado MAX valores */
 for ( count = 0; count < MAX; count++ )
 {
  printf("Enter an integer value: ");
  scanf("%d", &array[count]);

  if(array[count] == 0)
    count = MAX;
 }
 array[MAX] = 0;
 /** Llama a la funcion y desliega el valor de retorno. **/
 printf("\n\nLargets value = %d", largest(array));

}

/* La funcion largest() regresa el valor mas grandes */
/* de un arreglo entero */

int largest(int x[])
{
  int count, biggest = -12000;

  for( count = 0; x[count] != 0; count++ )
  {
   if( x[count] > biggest )
        biggest = x[count];
  }
  return biggest;

}







