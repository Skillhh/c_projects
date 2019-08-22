#include<stdlib.h>
#include<stddef.h>

struct digit{
	int num;
	struct digit * next;
};

struct digit * createDigit(int dig){
	struct digit * ptr;
	ptr = (struct digit * ) malloc(sizeof(struct digit));
	ptr->num =  dig;
	ptr->next = NULL;
	return ptr;
}

