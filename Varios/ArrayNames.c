#include<stdio.h>

#define MAX 100

int main()
{
	char FirstName[101], LastName[101];
	
	int i, repeat;
	
	scanf("%d", &repeat);
	
	for(i = 0; i < repeat; i++)
	{
		scanf("%s %s", FirstName, LastName );
		printf("%s %s\n",  LastName, FirstName);
	}
	
//	
//	for( i = 0; i < repeat; i++ )
//	{
//		scanf("%s %s", &firstName[i], &lastName[i]);		
//	}
//	for( i = 0; i < repeat; i++ )
//	{
//		printf("%s %s", lastName[i], firstName[i]);
//	}
	
	return 0;
}
