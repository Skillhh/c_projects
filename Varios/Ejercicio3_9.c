#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int main()
{
  int costo[MAX];
  int *p_costo;
  int i;
  /* Lleno el arreglo con numeros aleatorios */
  for( i = 0; i < MAX; i++)
  {
    costo[i] = rand();
  }
  /** Ingreso el primer valor del arreglo  **/
  p_costo = costo;

  /**
  1. Leo los numeros introducidos al arreglo de formadirecta.
  2. Aumento el apuntador para que muestre de forma indirecta el resto
  de los valores del arreglo.
  **/
  for( i = 0; i < MAX; i++)
  {
   printf("Variable: %d\t Apuntador: %d\n", costo[i], *p_costo++);
  }

}


