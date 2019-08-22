#include <stdio.h>

void func_age(int * );

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	func_age( ageAddr );//Write your function call here

	printf("Your new age will be %d!\n", age);
	return 0;
}
void func_age(int *age) //Write your function here
{
	if( * age > 20 )
	{
		* age = * age - 10;
	}
	else
	{
		* age = * age * 2;
	}

}
