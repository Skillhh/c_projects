#include<stdio.h>

int main(void)
{
	char nombre[50];
	int i = 0;
	
	scanf("%s", nombre);
	
	while( nombre[i] != '\0' )
		i++;
		
	if( i%2 == 0)
		printf("1");
	else
		printf("2");
	
	
	return 0;
}
