#include <stdio.h>
#include <string.h>

//char *_memcpy(char *dest, char *src, unsigned int 10);
char *mem(char *);
int main () 
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50] = "Heloooo!! aqewesdasdasdasdassdasdasdasdasdasdas";

//	printf("Before memcpy dest = %s\n", dest);

//	printf("%d\n", strlen(dest + 10));
	mem(dest + 10);

	printf("%s", dest);
//	_memcpy(dest + 2);	
//	memcpy(dest + 10, src, strlen(src)+1);
//	puts(dest + 10);	
//	printf("After memcpy dest = %s\n", dest);
	return(0);
}
/*
void *_memcpy(char *dest, char *src, unsigned int 10);
{
}
*/
char *mem(char *s)
{
	
	return s;
}
