#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node * next;
} node;

void print_list(node *);

int main()
{
	node * head = NULL;
	node * second = NULL;
	node * third = NULL;

	head = (node*) malloc(sizeof(node));
	second = (node*) malloc(sizeof(node));
	third = (node*) malloc(sizeof(node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	print_list(head);

	return (0);

}
void print_list(node *n)
{
	while (n != NULL)
	{
		printf("%d", n->data);
		n = n->next;
	}
}
