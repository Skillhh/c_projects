#include <stdio.h>
#include <stdarg.h>

typedef struct format
{
	char *p;
	void (*f)(void)
};
char _char_(char *);
int _int_(char *);
void (*f)(char *);
int main()
{
	print_data("ci", 'H', 0);
	return (0);
}
void print_data(char *a, ...)
{
	va_list args;
	char *arg_c;
	int arg_i;

	int i = 0, count = 0;
	/*
	while (a[i])
		i++;
	count = i;
	*/
	va_start(args, a);

	for (i = 1; a[i] != '\0' ; i++)
	{	
		arg_c = va_arg(args, char *);
		printf(" %c ", arg_char(arg_c));
		arg_i = va_arg(args, int);
		printf(" %d ", arg_int(arg_i));
	}
	va_end(args);
}
char arg_char(char *a)
{
	return (a);
}
int arg_int(int a)
{
	return (a);
}

