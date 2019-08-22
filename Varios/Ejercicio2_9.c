
#include<stdio.h>

int main()
{
  int costo = 25;
  int *p_costo;

  p_costo = &costo;

  printf("%d", *p_costo);


}
