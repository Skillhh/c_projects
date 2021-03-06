/* Add new numbers at the tail of the list */
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int num;
	struct node * next;
} Node, * NodePtr;

void printList(NodePtr);
NodePtr makeNode(int);

int main(){

	int n;
	NodePtr top, np, last;

	top = NULL;

	if(scanf("%d", &n) != 1)
		n = 0;

	while( n != 0){
		np =  makeNode(n);			// Create a new node conteining n
		if(top == NULL)				// Set top if first node
			top = np;
		else 
			last -> next = np;		// Set last -> next for other nodes
		last = np;					// Update last to new node
		if (scanf("%d", &n) != 1)
			n = 0;	
	}
	
	printList(top);					// Print the list

} // End main()

NodePtr makeNode(int n){

	NodePtr np = (NodePtr) malloc(sizeof (Node));
	np -> num = n;
	np -> next = NULL;
	return np;

} //End makeNode()

void printList(NodePtr np){
	
	while(np != NULL){		// as long as there's a node
		printf("%d\n", np->num);
		np = np -> next;		// go on to the next node	
	}

}	// End printList()
