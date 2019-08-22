#include<stdio.h>

struct student{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;    
};
void printStudent(struct student stud);

int main(){
    struct student me = {"Petra", "Taylor", 1989, 3.5};

    printStudent(me);

    return 0;
}
void printStudent(struct student stud){

    printf("Name: %s %s\n", stud.firstName, stud.lastName);
    printf("Year of birth: %d\n", stud.birthYear);
    printf("Average grade: %.2lf\n", stud.aveGrade);
}
