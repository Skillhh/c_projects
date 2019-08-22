#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
		

int _printf(const char *format, ...);
void p_char(va_list c)

typedef struct fun_t
{
	char *pt;
	void (*f)(va_list);
}id;

int main()
{
	
	_printf("Hola Giovanny");
	_printf("%%");
	_printf("%%%%");
	return (0);
}
int _printf(const char *format, ...)
{	
	id fun[] = {
		{"c", p_char},
		{"s", },
		{NULL, NULL}
	};
	int i, j = 0, len = 0,sp_char = 0;
	char *p = NULL;
	if (f != NULL)
	{
		for (i = 0; format[i] && format; i++)
		{
			if (format[i] == '%')
			{	
				p[j++] = format[i + 1]; /* alamcena el caracter segido de % */
				p[j + 1] = '\0';
				sp_char++; /* cantidad caraceres especiales*/
			}
		}
		len = i; /* largo del string */
		if(sp_char == 0) /* si no hay caracter especial */
		{
			for (i = 0; format[i]; i++)
				putchar(format[i]);		/* Imprime format */
		}
	
		va_list p; /* pasamos string */
		va_start(p, len);
		for (i = 0; p[i]; i++)
		{
			for( j = 0; fun[i].p; j++)
			{
				if(fun[j].pt[0] == p[i])
					fun[j].f(p);	
			}
		}
		va_end(p);
	}
}
void p_char(va_list c)
{
	putchar(c + 48);
}
