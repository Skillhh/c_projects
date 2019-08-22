#include<stdio.h>

int add( int a , int b);

int main()
{
    int a = 12, b = 5;

    int sum =  add( a, b );
    printf( "%d\n", a);
    printf("%d", sum );

    return 0;
}
int add( int a, int b )
{
    int sum;
    a = 3;
    sum = a+b;

	return(sum);

}
