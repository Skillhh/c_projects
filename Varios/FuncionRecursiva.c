#include<stdio.h>

unsigned int factorial( unsigned int a );

int main()
{
 unsigned int f, x;

 puts("Enter an integer value between 1 and 8: ");
 scanf( "%d", &x);

 if( x > 8 || x < 1 )
 {
  printf("Only values from 1 to 8 are acceptble\n");
 }
 else
 {
 f = factorial(x);
 printf("\n%u factorial equals %u\n", x, f);
 }
}

unsigned int factorial(unsigned int a)
{
 if( a == 1 )
  return 1;
 else
 {
  a *= factorial( a - 1 );
  return a;
 }
}
