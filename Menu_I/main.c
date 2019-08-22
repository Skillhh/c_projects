/* Demuestra el uso de un ciclo infinito */
/* para estructurar un sistema de menu */
#include <stdio.h>

#define DELAY 200000        /* Usando en el ciclo de espera */

int menu(void);
void delay(void);

int main() {

    int choice;

    while(1)
    {
        //Obtiene la seleccion del ususario.

        choice = menu();

        //Ramifica en base a al entrada
        if( choice == 1 )
        {
            puts("\nExecuting choice 1.");
            delay();
        }
        else if( choice == 2 )
        {
            puts("\nExecuting choice 2.");

        }
        else if( choice == 3 )
        {
            puts("\nExecuting choice 3.");
            delay();
        }
        else if( choice == 4 )
        {
            puts("\nExecuting choice 4.");
            delay();
        }
        else if( choice == 5 ) // Sale del programa
        {
            puts("Exiting program now..");
            delay();
            break;
        }
        else
        {
            puts("Invalid choice, try again. ");
            delay();
        }//If aniidados
    }//Menu While

    return 0;
}//Main
//Despliega un menu y recibe la seleccion de usuario
int menu(void)
{
    int reply;

    puts("\nEnter 1 for task A.");
    puts("Enter 2 for task B.");
    puts("Enter 3 for task C.");
    puts("Enter 4 for task D.");
    puts("Enter 5 to exit program.");

    scanf("%d", &reply);

    return reply;
}
void delay(void)
{
    long x;
    for( x = 0; x < DELAY; x++ )
        ;
}