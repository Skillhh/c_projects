#include<stdio.h>

int factorial(int);

int main()
{
 int n, facto;

 printf("Ingrese un numero: ");
 scanf("%d", &n);
 if( n < 0 )
 {
    printf("\n%d es Negativo.", n);
 }
 else
 {
    facto = factorial(n);
    printf("\n%d! = %d\n", n, facto);
 }
 return 0;
}
int factorial( int n )
{
    int result;
    if( n == 0 )
    {
        result = 1;
    }
    else
    {
        result = n * factorial( n - 1 );
    }
    return result;

}
