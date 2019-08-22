#include<stdio.h>

int divisible(int);

int main(void){
	int num, div;
	scanf("%d", &num);
	if(divisible(num))
		printf("is divisible\n");
	else
		printf("No es divible\n");
		
	return 0;
}
int divisible(int num){
	int div;

	div=num%3;
//	printf("%d", div);
	if(div ==0 )
		return 1;
	else
		return 0;
}

