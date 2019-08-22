#include <stdio.h>

void add(int a,  int b)
{
	printf("Adding is %d\n", a + b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n",  a - b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n",  a * b);
}

int main(void)
{
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a = 15, b = 10;

	printf("Enter choice: 0 for add, 1 for subtract and 2 "
			"for multiply\n");
	printf("\na  = 15 and b = 10\n");
	scanf("%d", &ch);
	if (ch > 2)
		return (0);
	(*fun_ptr_arr[ch])(a, b);
	return (0);
}
