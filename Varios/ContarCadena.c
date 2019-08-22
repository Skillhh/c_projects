#include<stdio.h>

int main()
{
	char a[10];
	int i, contador;
	
	gets(a);
	
	while( a[i] != '\0')
	{
		contador += 1;
		i++;
	}
	printf("%d", contador -1);

	
	
	return 0;
}
