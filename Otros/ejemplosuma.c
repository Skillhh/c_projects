#include <stdio.h>
int suma(int,int);
int main()
{
	int (*ptr)(int,int) = &suma;
	printf("%d",(*ptr)(2,3));
	return (0);
}
int suma(int a,int b)
{
	return (a+b);
}
