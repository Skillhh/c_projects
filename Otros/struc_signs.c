#include <stdio.h>
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}opt_t;
int (*get_op(char *op))(int a, int b);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

int main()
{
	int res = 0;

	res = (*get_op("%d"))(20, 4);
	printf("%d\n", res);
	return (0);
	
}
int (*get_op(char *op))(int a, int b)
{
	opt_t ops[] = {
		{"+", add},
		{"-", sub},
		{"*", mul},
		{"/", div},
		{"%", mod},
		{NULL, NULL}	
	};
	int i = 0; 
	while (i < 5)
	{
		if(*op == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
int add(int a, int b)
{
	return (a + b);
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
int div(int a, int b)
{
	return (a / b);
}
int mod(int a, int b)
{
	return (a % b);
}
