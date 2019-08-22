#include<stdio.h>

int main(void)
{
	int number1, number2, number3;

	int max;

	scanf("%d", &number1);
	scanf("%d", &number2);
	scanf("%d", &number3);

	max = number1;

	if(number2 > max)
		max = number2;
	
	if(number3 > max)
		max = number3;

	printf("The largest number is %d\n", max);

	return 0;

}
