#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int n;
	struct node * next;
} Node;
void print_nodes(Node **);
void free_node(Node **);
Node *add_head(Node **head, int n);
Node *add_end(Node **head,  int n);
Node *add_afternode(Node **head, int n, int p);
Node *delete_node(Node **, int n);
int main()
{
	/* Initialize Nodes */
	Node *head = NULL; 
	Node *snd = NULL;
	Node *thd = NULL;
	Node *new;
	Node *new1;
	Node *new2;
	Node *new3;
	/* allocate node */
	head = (Node *) malloc(sizeof(Node));
	snd = (Node *) malloc(sizeof(Node));
	thd = (Node *) malloc(sizeof(Node));
	new = (Node *) malloc(sizeof(Node));
	new1 = (Node *) malloc(sizeof(Node));
	new2 = (Node *) malloc(sizeof(Node));
	new3 = (Node *) malloc(sizeof(Node));

	/* give value to nodes */
	head->n = 1;
	head->next = snd;

	snd->n = 2;
	snd->next = thd;

	thd->n = 3;
	thd->next = NULL;

	new->n = 0;

	new->next = head;
	head = new;

	new1->n = 4;
	thd->next = new1;

/* Agregando -1 a la cabecera */
	new3->n = -1;
	new3->next = head;
	head = new3;

/* Agregar en medio */
	new2->n = 5;
	new2->next = snd->next;
	snd->next = new2;
/* Eliminar en la cabecera -1 */
	head = new3->next;
	free(new3);
/* Eliminando 5 dentro de la lista */
	snd->next = new2->next;
	free(new2);
/* Eliminando Ultimo */
	thd->next = new1->next;
	free(new1);
	


/*
	add_head(&head, -2);
	add_head(&head, -3);
	add_end(&head, 5);
	add_end(&head, 6);
	add_end(&head, 7);
	add_end(&head, 8);

	add_afternode(&head, 20, 3);
*/	
//	delete_node(&head, 0);

	print_nodes(&head);
/*
	free_node(&head);
	free_node(&snd);
	free_node(&thd);
	free_node(&new);
	free_node(&new1);
	free_node(&new2);
	free_node(&new3);*/
}
void print_nodes(Node **h)
{
	if ((*h) == NULL)
	{
		printf("Error.");
		return;
	}

	while((*h) != NULL)
	{
		printf("%d ", (*h)->n);
		(*h) = (*h)->next;
	}
}
Node *add_head(Node **head, int n)
{
	Node * tmp ,* new;
	
	tmp = (*head);

	new = (Node *) malloc(sizeof(Node));

	new->n = n;
	
	new->next = tmp;
	tmp = new;

	(*head) = tmp;
	
	return ((*head));
}
Node *add_end(Node **head,  int n)
{
	Node * tmp, *new;
	
	new = (Node*) malloc(sizeof(Node));
	tmp = (*head);
	new->n = n;
	new->next = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return(tmp);
}
Node *add_afternode(Node **head, int n, int p)
{
	int i = 0;
	Node *new, *tmp;
	tmp = (*head);

	new = (Node *) malloc(sizeof(Node));
	
	new->n = n;

	while (i != p -1)
	{
		tmp = tmp->next;
		i++;
	}
	
	new->next = tmp->next;
	tmp->next = new;
//	(*head) = tmp;
	return (tmp);
}
void free_node(Node **h)
{
	Node * tmp;

	tmp = (*h);

	free(tmp);
	
	(*h) = tmp;

}
Node *delete_node(Node **h, int n)
{
	int i = 0;

	Node *tmp, *prev;

	tmp = (*h);

	if (tmp != NULL && n == 0)
	{
		(*h) = tmp->next;
		free(tmp);
		
		return ((*h));
	}	
/*
	while (i < n - 1)
	{
		prev = prev->next;
		i++;
	}
*/
}
