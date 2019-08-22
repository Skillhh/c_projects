#include <stdio.h>
#include <stdlib.h>
/*prototypes*/

void print(int a,int b,int(*ptr)(int,int));
int suma(int a,int b);
int resta(int a,int b);
int divi(int a, int b);
int mul(int a, int b);
int modu(int a, int b);
int main(int argc, char *argv[])
{
	if(argc == 3)
	{
	        int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		print(a,b,suma);
		print(a,b,resta);
		print(a,b,divi);
		print(a,b,mul);
		print(a,b,modu);
	}
	else
	{
		printf("ERROR MEN\n");
	}
	return (0);
}
void print(int a,int b,int(*ptr)(int,int))
{
	printf("%d\n",(*ptr)(a,b));
}

int suma(int a,int b)
{
	return(a+b);
}
int resta(int a,int b)
{
	return(a-b);
}
int divi(int a, int b)
{
	return (a/b);
}
int mul(int a, int b)
{
	return(a*b);
}
int modu(int a, int b)
{
	return(a%b);
}
