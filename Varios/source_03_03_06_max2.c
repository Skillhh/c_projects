/* Find the larger of two numbers */
#include<stdio.h>

int main(void)
{
	/* The two numbers */
	int number1, number2;

	/* We will save the larger number here */
	int max;

	/* read two numbers */
	scanf("%d", &number1);
	scanf("%d", &number2);

	/* We temporarilly  assume that the former numbers \
	 * is the larger one  */
	/* We will check it soon*/
	max = number1;

	/* We check if the ssumption was true */
	if(number2 > max)
		max=number2;

	/* We print the result */
	printf("The largest number is %d\n", max);

	/* We finish the program successfuly */
	return 0;

}
