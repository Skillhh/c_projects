/* Demuestre un enunciado switch */
#include <stdio.h>

int main()
{
    int reply;

    puts("Enter a number between a 1 and 5: ");
    scanf("%d", &reply);

    switch (reply)
    {
        case 0:
            break;
        case 1:
            puts("You entered 1.'");
            break;
        case 2:
            puts("You entered 2.");
            break;
        case 3:
            puts("You enteres 3.");
            break;
        case 4:
            puts("You entered 4.");
            break;
        case 5:
            puts("You enteres 5 ");
            break;
        default:
            puts("Out of range, try again.");
    }
}