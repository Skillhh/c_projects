#include<stdio.h>

#define MAX 10

int main()
{
  /* Declaracion e inicializa un arreglo de enteros */
  int i_array[MAX] = {0,1,2,3,4,5,6,7,8,9};

  /* Declara un apuntador a int y una variable int */
  int *i_ptr, count;

  /* Declara e  inicializa un arreglo de flotantes */
  float f_array[MAX] = { .0,.1,.2,.3,.4,.5,.6,.7,.8,.9 };

  /* Declara un apuntador a float */
  float *f_ptr;

  i_ptr = i_array;
  printf("\ni_ptr: %d", i_ptr);

  f_ptr = f_array;
  printf("\nf_ptr: %d\n", f_ptr);

  for( count = 0; count < MAX; count++ )
        printf("\n*i_ptr: %d\tf_ptr: %.2f", *i_ptr++,*f_ptr++);


  printf("\n");

}
