#include<stdio.h>

int main()
{
 //long a[50];
 int a[50];


 for(int i = 0; i < 50; i++ )
 {
   
   if( i == 49 )
   {
    a[i] = 123.456;   
   }
 }

printf(" %d ", a[49] );

}
