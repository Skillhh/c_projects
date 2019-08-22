/* Demuestra a calloc(). */
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	unsigned num;
	int * ptr;

	printf("Enter the number of type int to allocate: ");
	scanf("%d", &num);

	ptr = calloc(num, sizeof(int));
	
	if(ptr != NULL)
		puts("Memory allocation was successful.");
	else
		puts("memory allocation failed.");

}
