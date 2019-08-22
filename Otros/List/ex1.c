#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	char *data;
	struct Node * next;
} node;

node print_list(node *);

int main()
{
	node * head = NULL;
	node * second = NULL;
	node * third = NULL;

	head = (node*) malloc(sizeof(node));
	second = (node*) malloc(sizeof(node));
	third = (node*) malloc(sizeof(node));

	head->data = "Hola";
	head->next = second;

	second->data = NULL;
	second->next = third;

	third->data = "todos.\n";
	third->next = NULL;

	print_list(head);

	return (0);

}
node print_list(const node *n)
{
	node *str;
	str = (node *) malloc(sizeof(node));
		
	while (str != NULL)
	{
		if (str->data == NULL)
		{
			str->data = "(nill)";
			printf("\n[0] %s\n", str->data);
			str = str->next;


		}
		else
		{
			printf("%s", str->data);
			str = str->next;
		}
	}
	return (node *) str;
}
