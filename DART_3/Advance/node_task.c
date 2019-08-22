#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr); 
void stringCopy(struct student * std,  char Name[] );
void printStudent(struct student * start);

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);
/*
    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);
*/
	printStudent(start);
	
    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

    return 0;
}
struct student *createStudent(char studentName[], int studentAge){
	struct student * ptr;
	ptr = (struct student * ) malloc(sizeof(struct student));
	stringCopy(ptr, studentName);
	ptr->age = studentAge;
	ptr->next = NULL;
	return ptr;
}
struct student * append(struct student * end, struct student * newStudptr){
	end->next = newStudptr;
	end = newStudptr;
	return end;
} 
void stringCopy( struct student * std, char Name[]){
	int i = 0 ;
	while( Name[i] != '\0'){
		std->name[i] = Name[i];
		i++;
	}

}
void printStudent(struct student * start){
	struct student * std = start;
	while(std != NULL){
		printf("%s is %d years old.", std->name, std->age);
		std = std->next;
		printf("\n");
	}
}
