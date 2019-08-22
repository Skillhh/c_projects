#include<stdio.h>

struct student{
	char name[50];
	int age;
	struct student * next;
};

int main(){
	struct student st1={ "Alan",23, NULL};
	struct student st2={ "Megan",25, NULL};

	struct student * start;
	
	start = &st1;
	st1.next = &st2;

	printf("%s is %d year old.", start->name, start->age);
	printf("%s is %d year old.", start->next->name, start->next->age);

	return 0;
}
