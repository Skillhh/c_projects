#include<stdio.h>

int main()
{
 int a = 5;
 int *x;

 x = &a;

 printf("\nAcceso directo a \"a\": %d por a", a);
 printf("\nAcceso indirecto a \"a\": %d  por *x ", *x);
 printf("\n");
 printf("\nDireccion de a: %d por medio de &a", &a);
 printf("\nDireccion de a: %d por medio de x", x);
 printf("\n");



}
