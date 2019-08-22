/* Limpieza de los caracteres adicionales de stadin */

#include<stdio.h>

void clear_kb(void);

int main(void){

    int age;
    char name[20];

    /* Pide la de edad del usuario */

    puts("Enter your age: ");
    scanf("%d", &age);

    /* Limpia a stdin de cualquier caracter adicional. */
    clear_kb();

    /* Pide ahora el nombre del usuario. */

    puts("Enter your frist name: ");
    scanf("%s", name);

    /* Display the data. */

    printf("Your age is %d.\n", age);
    printf("Your name is %s.\n", name );

    return 0;
}

void clear_kb(void){

    /* Limpia a stdin de cualquier carcter que este en espera. */
    char junk[80];
    gets(junk);

}
