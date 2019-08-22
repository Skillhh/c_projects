/* Demuestre un enunciado switch */
#include <stdio.h>
#include <stdlib.h>
#define DELAY 150000

int menu(void);
void delay(void);

int main()
{
    int reply;

    puts("Enter a number between a 1 and 5: ");
    scanf("%d", &reply);

    while(1){

        switch (menu())
        {
            case 1:
                puts("You entered 1.'");
                delay();
                break;
            case 2:
                puts("You entered 2.");
                delay();
                break;
            case 3:
                puts("You enteres 3.");
                delay();
                break;
            case 4:
                puts("You entered 4.");
                delay();
                break;
            case 5:
                puts("Finishing program now ... ");
                delay();
                exit(0);
            default:
                puts("Out of range, try again.");
        }//switch

    }//while
}
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