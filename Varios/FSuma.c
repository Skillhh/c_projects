#include<stdio.h>

int producto(int a, int b);

int main()
{
	int x = 32, y = 34 ;
	printf("La suma de los numeros es: %d", producto(x,y));
}
int producto(int a, int b)
{
	return (a + b);
}