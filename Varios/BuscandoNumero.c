#include<stdio.h>

int main()
{
	int list[] = { 2, 6, -1, 7, 10, 8, 54, 45, 9, 5 };
	int item = 0;
	int i = 0;
	int n =10;
	int found = 0;
	
	printf("Escriba el numero que desea buscar en la lista: ");
	scanf("%d", &item);
	
	while(!found && i < n)
	{
		if( item == list[i] ){
			found = 1;
		}
		else{
			i++;
		}
	}
	if( !found ){
		printf( "El numero %d no se encuentra en el listado.\n", item );
	}else{
		printf( "El numero %d se encuntra en el indice %d de la lista.\n", item, i );
	}	
	
	return 0;
}
