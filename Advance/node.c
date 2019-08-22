#include<stdio.h>
#include<stdlib.h>

struct node{
	int num;
	struct node * next;
};

int length( struct node * top );
struct node * search(struct node * top, int key);
struct node * getLast(struct node * top);

int main(){

	struct node num1 = { 36, NULL};
	struct node num2 = { 15, NULL};
	struct node num3 = { 52, NULL};
	struct node num4 = { 23, NULL};
	int n = 0;
	int number, nSearch;

	struct node * Node;

	//struct node * Node, * curr;
	/* Ingresa numero a buscar */
	printf("Escriba el numero a buscar: ");
	scanf("%d", &number );
	
	Node = &num1;
	num1.next = &num2;
	num2.next = &num3;
	num3.next = &num4;
	
	n = length(Node);

	printf("\nHay %d elementos. ", n);
	/* Imprime si existe o no el numero ingresado*/
	if(nSearch = search(Node, number) != NULL ){
		printf("\nEl numero %d se encuentra dentro de la lista.", number );
	}
	else{
		printf("\nEl numero %d no existe dentro de la lista.", number);
	}
	//curr = Node;
	/* Imprime el ultimo numero de la lista */
	printf("\nEl ultimo numero: %d", getLast(Node)); 
}
/* Cuenta la cantidad de elementos dentro de la lista */
int length( struct node * top ){
	int n =0 ;
	struct node * curr = top;

	while ( curr != NULL ){
		printf("%d\n", curr->num);
		n++;
		curr = curr->next;	
	}
	return n;
}
/* Busca dentro de la lista el numero ingresado por usuario */
struct node * search(struct node * top, int key){
	
	while( top != NULL && key != top->num)
		top = top->next;

	return top;
}
/* Muestra el ultimo elemento de la lista */
struct node * getLast(struct node * top ){
	int last;
	if( top == NULL )  
		return NULL;
	
	while(top->next != NULL)
		top = top->next;	
	return top->num;
}
