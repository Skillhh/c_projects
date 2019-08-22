#include<stdio.h>

void func(char *a);

int main()
{
	char cadena[10];
	scanf("%s", cadena);

	func(cadena);
	
	return 0;
}
void func( char *a )
{
	char *ptr;
	ptr = a;
	printf("%s", *ptr);	
} 
