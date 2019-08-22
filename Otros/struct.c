#include <stdio.h>
#include <stdlib.h>

struct cat
{
	char *a;
	char **p;
	int arr[10];
};
int main()
{
	struct cat *pet;
	char **dp;
	int *pn;
	printf("%d\n", sizeof(dp));
	pet = malloc(sizeof(struct cat));
	printf("%d", sizeof(struct cat));
	
}
