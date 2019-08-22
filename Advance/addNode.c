/* Read the numbres and createa linked list */
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int num;
	struct node * next;
} Node, * NodePtr;

/* Functions */
void printList(NodePtr);
//NodePtr deleteNode(NodePtr, int);
NodePtr makeNode(int);
NodePtr delNode(NodePtr, int);


int main(){

	int n;
	NodePtr top, np, curr, last;

	top = NULL;
	if(scanf("%d", &n) != 1 )
		n = 0;

	while (n != 0 ){
		np = makeNode(n);			// Create a new containg n
		if (top == NULL)
			top = np;				// Set top if first node
		else
			last -> next = np;		// Set last -> next for other nodes

		last = np;
		if( scanf("%d", &n) != 1)
			n = 0;	
	}

/* Ultim de Primeras */
/*	while(n != 0){
		np = makeNode(n);
		np -> next = top;
		top = np;
		if( scanf("%d", &n) != 1) 
			n = 0;
	}*/

	int nm;
	
	printf("number to delete: ");
	scanf("%d", &nm);
	
	//curr = deleteNode(top ,num);
	curr = delNode(top, nm);
		
	printList(curr);

} // end main
// Add node
NodePtr makeNode(int n){
	NodePtr np = (NodePtr) malloc(sizeof(Node));
	np -> num = n;
	np -> next = NULL;
	return np;
} // end makeNode
// Delete node
/*
NodePtr deleteNode(NodePtr ptr, int del){
	NodePtr curr, prev = ptr;
		
	while(curr != NULL ){
		if(curr == del){
			prev -> next = curr -> next;
			free(curr);
			curr = prev -> next;
		}
		else{
			prev = curr;
			curr = curr->next;
		}
	}
	return curr;
}*/
NodePtr delNode(NodePtr top, int nm ){
	NodePtr prev, tmp;
//	prev = NULL;	
	prev = top;
	tmp = prev;
	while( prev->num != nm){	
		prev = prev->next;
		tmp = prev;
	}
//	curr = curr->next;
	tmp->next = prev->next;
	free(prev);
	
	return tmp;
}	

// Print the linked list
void printList(NodePtr np){
	while(np != NULL){
		printf("%d\n", np -> num);
		np = np -> next; // go on to the next node
	}
} // end printList
