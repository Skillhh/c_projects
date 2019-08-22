/* EXE2-2.C */
#include<stdio.h>

void display_line(void);

int main()
{
    display_line();
    printf("\n Teach yourself C in 21 days! \n");
     display_line();
    printf("\n");
    return 0;
}
/* Imprime una line de asteriscos */
void display_line(void)
{
    int counter;

    for( counter=0; counter < 2; counter++)
        printf("*");

}
/*Fin del Programa*/