#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

int _printf(const char *format, ...);
void *_strcpy(char *, char *);
int _strlen(char *);

int main(void)
{
//	char a = 'j';
	_printf("hola");
	
	return (0);
}
int _printf(const char *format, ...)
{
	int i, count = 0,xcent = 0;
	char *str = NULL;
	char *p;
	char *sp_ch = "hello";
	for(i = 0;format[i]; i++)
	{	
		if (format[i] == '%')
			xcent++;
		i++;
	}
	count = _strlen();
	_strcpy(p, str);
	printf("%d", count);
	printf("%s", p);
//	count = i;
//	write(1, str, count);

	return (0);
}
int _strlen(char *a)
{
	int i = 0;
	while(a[i])
		i++;
	return (i);
}
void *_strcpy(char *dest, const *src)
{
	int i = 0;
	int len = 0;
	len = _strlen(src);

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
}
