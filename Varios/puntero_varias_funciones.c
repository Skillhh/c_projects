#include<stdio.h>

/* Prototipos de funciones */
void func1( int x );
void one(void);
void two(void);
void other(void);

int main(){

	int a;

	for( ; ; ){
		puts("\nEnter an integer between 1 and 10, 0 to exit:  ");
		scanf( "%d", &a );

		if( a == 0 )
			break;

		func1(a);
	}
}
void func1( int x ){

	/* El apuntador a funcion */
	int (*ptr)(void);

	if( x == 1 )
		ptr = one;
	if( x == 2 )
		ptr = two;
	else
		ptr = other;


	ptr();

}
void one(void){
	puts("You entered 1.");
}
void two(void){
	puts("You entered 2.");
}
void other(void){
	puts("You entered a something other than 1 and 2.");
}
