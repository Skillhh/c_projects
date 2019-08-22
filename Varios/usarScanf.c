#include<stdio.h>

void clear_kb(void);

int main(){

    int i1, i2;
    long l1;
    float f1;
    double d1;
    char buf1[80], buf2[80];

    puts("Enter an integer and a floating point number.");
    scanf("%ld %lf", &l1, &d1);
    printf("You entered %ld and %lf.\n", l1, d1);
    puts("The scanf() formt string used the 1 modifier to store");
    puts("ypur input a type long and a type double.\n");

    clear_kb();

    puts("Enter a 5 digits integer (for example, 54321).");
    scanf("%2d%3d", &i1, &i2);

    printf("You entered %d and %d .\n", i1, i2);
    puts("Note how the field widthspecifier in the scanf() format.");
    puts("string split your input into two values.\n");

    clear_kb();

    puts("Enter your first and last names separated by a space.");
    scanf("%[^ ]%s", buf1, buf2);
    printf("Your first name is %s\n", buf1);
    printf("Your last name is %s\n", buf2);
    puts("Note how [^ ] in the scanf() format string, by excluding");
    puts("the space chracter, caused the input to be split.");

}

void clear_kb(void){

    char junk[80];
    gets(junk);

}

