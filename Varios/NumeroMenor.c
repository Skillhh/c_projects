#include<stdio.h>

int min( int x, int num[]);

int main()
{
	int cantidad = 0;
	int valor, menor = 0;
	int i;
	int num[10] ;
	
 	scanf("%d", &cantidad);
 	
	for( i = 0; i < cantidad; i++ )
	{
	 	scanf("%d", &valor); 
	 	num[i] = valor;		
	}
 	
 	menor = min(cantidad, num);
	printf("%d", menor);
}
int min( int x, int num[])
{
	
	int i, j, aux = 0;
	int menor = 0;
	//int num[10] ;
 
	for( i = 0; i < x; i++ )
	{
	 	for( j = i + 1; j < x; j++ )
	 	{
			if( num[i] > num[j]  ) 
			{
			 	aux = num[i];
			 	num[i] = num[j];
			 	num [j] = aux;			
			}		 
		}
	}
	
	menor = num[0];
	return menor;
}


