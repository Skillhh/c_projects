#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int num;
	struct node * next;
}Node, * NodePtr;

void printList(NodePtr);
NodePtr addInPlace(NodePtr, int);
NodePtr makeNode(int);

int main(){
	int n;
	NodePtr top = NULL;
	if(scanf("%d", &n) != 1) 
		n = 0;
	while(n != 0 ){
		top = addInPlace(top, n);
		if(scanf("%d", &n) != 1)
			n = 0;
	}
	printList(top);
}// end main
/* Insert n in its ordered position */
/* and return a new list            */
NodePtr addInPlace(NodePtr top, int n){
	NodePtr np, curr, prev, makeNode(int);

	np = makeNode(n);
	prev = NULL;
	curr = top;
	while(curr != NULL && n > curr->num){
		prev = curr;
		curr = curr->next;
	}
	if(prev == NULL){
		np->next = top;
		return np;
	}
	np->next = curr;
	prev -> next = np;
	return top;
}// end addInlace
NodePtr makeNode(int n){
	NodePtr np = (NodePtr) malloc(sizeof(Node));
	np -> num = n;
	np -> next = NULL;
	return np;
}// end makeNode

void printList(NodePtr np){
	while(np != NULL){
		printf("%d\n", np->num);
		np= np->next;
	}
}// end PrintList

