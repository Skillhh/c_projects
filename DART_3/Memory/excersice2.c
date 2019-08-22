#include<stdio.h>

void myFunction(int);

int main(void)
{
	int i = 10;
	
	myFunction(i);
	printf("%d\n", i);
	return 0;

}
void myFunction(int j)
{
	j = 20;
}
