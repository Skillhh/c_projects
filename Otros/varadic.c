#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _strlen(char *s);
int _print(const char *f, ...);
void p_char(va_list);
void p_str(va_list);
void p_xcent(va_list);

typedef struct fun
{
	char *p;
	void (*func)(va_list);
}t_arg;

int main()
{
	char a = 'j';
	char *pt = "Giovanny";
	int	len = _strlen(pt);
	_print("Hola\n");
	_print("%c\n", a);
	_print("%s\n",pt);
	_print("%%\n");
	_print("%%%%\n");
	_print(NULL);

}
int _print(const char *f, ...)
{
	t_arg arr[] = {
		{"c", p_char},
		{"s", p_str},
		{"%", p_xcent},
		{NULL, NULL}
	};
	if (f != NULL)
	{
		int i, j;
		va_list args;

		va_start(args, f);

		for (i = 0; f[i]; i++)
		{	
			if(f[i] == '%')
			{
				for (j = 0; j < 3 ;j++)
				{
					if (arr[j].p[0] == f[i + 1])
						arr[j].func(args);
				}
			}
			else
			{	
				if (f[i-1] != '%')
					putchar(f[i]);
			}
		}
	//	putchar('\n');
		va_end(args);
	}
}

void p_char(va_list c)
{
	putchar(va_arg(c, int));
}
void p_str(va_list s)
{
	int i = 0; 
	char *str = (va_arg(s, char *));
	i = _strlen(str);
	write(1, str, i);
}
void p_xcent(va_list px)
{
	int len = 0;
	char *p = (va_arg(px, char *));
	len = _strlen(p);
	write(1, p,len);
}
int _strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
