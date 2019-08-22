#include<stdio.h>

void func1( void (*p)(void) );
void one(void);
void two(void);
void other(void);

int main(){

	/* El apuntador a funcion */
	void (*ptr)(void);
	int a;

	for( ; ; ){
		puts("\nEnter a integer between 1 and 10, 0 to exit: ");
		scanf("%d", &a);

		if( a == 0 )
			break;
		else if( a == 1 )
			ptr = one;
		else if( a == 2 )
			ptr = two;
		else
			ptr = other;

		func1(ptr);
	}
}
void func1( void (*p)(void)){
	p();
}

void one(void){
	puts("You entered 1.");
}

void two(void){
	puts("You entered 2.");
}
void other(void){
	puts("You entered something other than 1 or 2.");
}
