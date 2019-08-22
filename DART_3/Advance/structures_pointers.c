#include<stdio.h>

struct student{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};
void read_student(struct student *stdptr);
void print_student(struct student stud);

int main(){
    
    struct student me;
    read_student(&me);
    print_student(me);
    
    return 0;
}
void read_student(struct student *stdptr){
    printf("First Name: ");
    scanf("%s", (*stdptr).firstName);
    printf("Last Name: ");
    scanf("%s", (*stdptr).lastName);
    printf("Year of birth: ");
    scanf("%d", &(*stdptr).birthYear);
    printf("Average grade: ");
    scanf("%lf", &(*stdptr).aveGrade);
}
void print_student( struct student stud){
    printf("Name: %s %s\n", stud.firstName, stud.lastName);
    printf("Year of birth: %d\n", stud.birthYear);
    printf("Average grade: %.2lf\n", stud.aveGrade);
}

