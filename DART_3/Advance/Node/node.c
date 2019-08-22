#include<stdio.h>
#include<stdlib.h>
#include"libnode.h"

int main(void){
	struct digit * numberptr;
	int digitToStore = 5;
	numberptr = createDigit(digitToStore);
	printf("We are storing the digit %d and the pointer %p at  \
			memory location	%p. \n",numberptr->num, numberptr->next,numberptr);
	
}
