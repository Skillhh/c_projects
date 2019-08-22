#include<stdio.h>

struct student{
    char fisrtName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

int main(){

    struct student me = {"Petra", "Taylo", 1989, 3.5};
    struct student you = {"Giovanny", "Ortegon", 1985, 4.5};

    printf("Name: %s %s\n", me.fisrtName, me.lastName );
    printf("Year of birth: %d\n", me.birthYear);
    printf("Average grade: %.2lf\n", me.aveGrade);

    printf("Name: %s %s\n", you.fisrtName, you.lastName );
    printf("Year of birth: %d\n", you.birthYear);
    printf("Average grade: %.2lf\n", you.aveGrade);

    return 0;
}
