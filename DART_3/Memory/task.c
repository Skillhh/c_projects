#include<stdio.h>

void reverseArray( int * );

#define MAX 6

int main()
{
	int array[MAX];
	int value = 0;

	for( int i = 0; i < MAX; i++ )
	{
		scanf("%d", &value);
		array[i] = value;
	}
	
	reverseArray(array);

	return 0;

}
void reverseArray( int * ptr )
{
	for(int i = MAX - 1; i >= 0; --i )
		printf("%d\n", * (ptr+i));
}


