#include<stdio.h>
#include<stdlib.h>

int main()
{
 char a[10];

 char *a_ptr;

 printf("Escriba un nombre: ");
 scanf("%s", &a);

 a_ptr = a;

 printf("\nSu nombre es: %s\n", a_ptr );




}
