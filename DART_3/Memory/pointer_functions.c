#include<stdio.h>
void reset( int *, int [] );

int main()
{
	int arr[3] = {15, 16, 17};
	int arr1[3] = {10, 15, 20};
	reset(arr, arr1);
	printf("\n");
	return 0;

}
void reset( int * ptr, int x[] )
{
	for(int i = 2; i >= 0; --i )
		printf("*(ptr + %d): %d\n",i, *(ptr+i));	
	printf("\n");
	for(int j  = 0; j < 3; j++)
		printf("x[%d]: %d;\n",j, x[j]);
}
