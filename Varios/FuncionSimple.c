#include<stdio.h>

long cube(long x);//Prototipo de la funcion

int main()
{

 long input, answer;

 printf("Enter an integer value: ");
 scanf( "%ld", &input );

 answer = cube( input );
 printf(" \n\nThe cube of %1ld is %1ld.\n\n", input, answer);

}
//funcion
long cube (long x)
{

 long x_cubed;

 x_cubed = x * x * x;

 return x_cubed;

}
