#include<stdio.h>

int main()
{
	//! showmemory(start=65520)
	int arr[30] = { 15, 16, 17};
	
	printf("%p %d\n", arr, *arr);
	//definiendo puntero
	int * ptr = arr;
	
	for(int i = 0; i < 3; i++ )
		printf("arr[%d]: %d en %p\n",i, arr[i], ptr++);

	/* Re defniendo el primer elemento del arreglo de \
	 * que antes contenia a 15 ahora camboa a dos*/
	*ptr = 2;
	printf("%d\n", *ptr);
	*( ptr + 1) = 3;
	printf("%d\n", *(ptr + 1));
	*( ptr + 2 ) = 5;
	printf("%d\n", *(ptr + 2));		

	printf("\n**** Ahora fue modificado el Array *****\n\n");

	for(int i = 0; i < 3; i++ )
	{
		printf("arr[%d]: %d en %p\n", i, * (ptr + i), ptr++);
		i--;
	}
	printf("\n");
	return 0;
}

