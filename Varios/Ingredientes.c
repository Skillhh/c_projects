#include<stdio.h>

int main()
{
 int array[10];
 int valor;
 int i;
 
 for( i = 0; i < 10; i++ )
 {
 	printf("Ingrese valor: ");
 	scanf("%d", &valor);
 	array[i] = valor;
 }
 printf("valor a buscar: ");
 scanf("%d", &i);
  
 printf("%d", array[i]);
	
}
