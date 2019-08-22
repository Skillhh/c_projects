#include <stdio.h>

void print_name(char *s);
int main()
{
	char arr[] = "Hola";
	char *ptr = "Mundo";

	print_name(arr);
}
void print_name(char *s)
{
	printf("%s", s);
}
