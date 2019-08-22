#include<stdio.h>

void by_value(int a, int b, int c);
void by_ref(int *a, int *b, int *c);

int main(){
	
	int x =2, y = 4, z = 6;

	printf("\nBefore calling by_value(), x = %d, y = %d, z = %d.", x, y, z);
	by_value(x, y, z);
	
	printf("\nAfter calling by_value(), x = %d, y = %d, z = %d.", x, y, z);

	by_ref(&x, &y, &z);
	printf("\nAfter calling by_ref(), x = %d, y = %d, z = %d.", x, y, z);

}
void by_value(int a, int b, int c){
	
	a=0;
	b=0;
	b=0;

}
void by_ref( int *a, int *b, int *c){

	*a = 0;
	*b = 0;
	*c = 0;

}
