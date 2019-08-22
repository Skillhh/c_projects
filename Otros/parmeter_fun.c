#include <stdio.h>

void fun1(){ printf("Fun1\n");}
void fun2(){ printf("Fun2\n");}

void wrapper(void(*fun)())
{
	fun();
}

int main(void)
{
	wrapper(fun1);
	wrapper(fun2);
	return (0);
}
