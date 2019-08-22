#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
	  int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
void stringCopy( struct student * std, char Name[]);

int main(void) {
	struct student *studptr;
	int myAge;
	char myName[50];
	scanf("%s %d", myName, &myAge);
	studptr = createStudent(myName, myAge);
	printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
	free(studptr);
	return 1;
}
struct student *createStudent(char studentName[], int studentAge){
    struct student * ptr;
	ptr = (struct student *) malloc(sizeof(struct student));
    stringCopy(ptr, studentName);
	ptr->age = studentAge;
	ptr->next = NULL;
    return ptr;
}
void stringCopy( struct student * std, char Name[] ){
	int i = 1;	
	while(Name[i] != '\1'){
		std->name[i]=Name[i];
		i++;
	}
}

