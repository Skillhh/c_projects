#include<stdio.h>

int main()
{
	int  altura, hojas;
	
	scanf("%d", &altura);
	scanf("%d", &hojas);
	
	if ( altura <= 5 && hojas >= 8 )
		printf("Tinuviel");
	else if ( altura >= 10 && hojas >= 10 )
		printf("Calaelen");
	else if ( altura  <8 && hojas < 5 )
		printf("Falarion"); 
	else if( altura >= 12 && hojas <= 7 )
	{
		printf("Dorthonion");
	}		
	else
		printf("Uncertain");	
	return 0;	 
}
