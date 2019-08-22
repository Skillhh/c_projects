#include<stdio.h>

int twice( int y);

int main()
{	
	int y = 5;
	printf( " %d ", twice( y ) );		
}
int twice( int y)
{	
	return (2 * y);
}