#include<stdio.h>

int main(){
    char familyName[50];
    char firstName[50];
    int age;

    printf("Cual es tua apellido? \n");
    scanf("%s", familyName);
    fflush(stdout);
//    gets(familyName);
    printf("Cual es tu nombre? \n");
    scanf("%s", firstName);
//    gets(firstName);
    printf("Que edad tienes? \n");
    scanf("%d", &age);
    printf("%s %s %d\n", familyName, firstName, age);

    return 0;
}
