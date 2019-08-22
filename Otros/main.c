#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
/*
	char s = 'a';
	char *str = "Hola";
	write(1, str, 4);
	printf("%%c");
*/
	int i;
	char *p = NULL;
	char *ptr = "";
	write(1, "Hola", 4);
	//prinf("%z");
	printf("\n\nantes de p NULL");
	printf("Hola %\0 hola");
	 
	printf("%d",i);
/*	printf("%s", p);
	printf("antes de ptr", ptr);
	printf("%s\n", p);
	printf(NULL);
	printf("caracter especial: %%");
	printf("\ndespues del NULL");*/
}
