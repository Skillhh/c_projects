#include<stdio.h>

int larger_of( int a, int b );

int main()
{
 int x, y, z;

 puts("Enter two differents integer values: ");
 scanf("%d%d", &x, &y);

 z = larger_of( x, y);

 printf("\nThe larger value is %d.\n",z);
}

int larger_of( int a, int b)
{
 if( a > b )
   return a;
  else
   return b;
}
