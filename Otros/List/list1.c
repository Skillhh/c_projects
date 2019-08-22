#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	char * name;
	int age;
	struct node * next;
} Node;

void print_list(Node *p)
{
	while (p != NULL)
	{
		if (p->name == NULL)
		{
			printf("%p (nil)\n", p->name);
		}
		else
		{
			printf("%s %d\n", p->name, p->age);
		}
		p = p->next;
	}

}
Node *add_end(char *str, int a, Node **list)
{
	Node * new_node = (Node *) malloc(sizeof(Node));
	if (new_node == NULL)
		return (NULL);

	new_node->name = strdup(str);
	new_node->age = a;
	new_node->next = (*list);
	(*list) = new_node;
	
	return (*list);
}
Node *add_head(char *str, int a, Node **list)
{
	Node *new_n, *last;

	new_n = (Node *) malloc(sizeof(Node));
	if (new_n == NULL)
		return (NULL);

	last = (*list);

	new_n->name = strdup(str);
	new_n->age = a;
	new_n->next = NULL;

	if((*list) == NULL)
	{	
		(*list) = new_n;
		return (*list);
	}
	while (last->next != NULL)
		last = last->next;
	
	last->next = new_n;

	return (last);
}
void free_node(Node *list)
{
	Node * prev = list;
	Node * tmp;

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev->name);
		free(prev);
		prev = tmp;
	}
}
void delete_pop(Node **head)
{
	Node  *prev, *curr;

	prev = (*head);
	curr  = prev->next;
	prev = curr;
}

int main()
{
/** SIMPLE ADD **/
/*
	Node * p1, * p2, * p3;

	p1 = (Node *) malloc(sizeof(Node));
	p2 = (Node *) malloc(sizeof(Node));
	p3 = (Node *) malloc(sizeof(Node));

	p1->name = "Juan";
	p1->age = 33;
	p1->next = p2;

	p2->name = "David";
	p2->age = 22;
	p2->next = p3;

	p3->name = "Maria";
	p3->age = 34;
	p3->next = NULL;

	int num = p1->age;
	printf("\n%d\n ", num);
*/
Node * p = NULL;
/** ADD TO END **/
/*
	add_end("Juan", 33, &p);
	add_end("Maria", 23, &p);
	add_end("Alicia", 20, &p);
	add_end("Pedro", 30, &p);
*/	
	add_head("Juan", 33, &p);
	add_head("Maria", 23, &p);
	add_head("Alice", 30, &p);
	add_head("Pedro", 30, &p);

	delete_pop(&p);
	print_list(p);
	free_node(p);

	return (0);
}

