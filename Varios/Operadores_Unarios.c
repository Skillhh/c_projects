/* Dmeuestre los modos de prefijos y posfios de operadores unarios */

#include<stdio.h>

int main()
{
    int a, b;

    a = b = 5;

    printf("\n%d   %d",a--, --b);
    printf("\n%d   %d",a--, --b);
    printf("\n%d   %d",a--, --b);
    printf("\n%d   %d",a--, --b);
    printf("\n%d   %d",a--, --b);

    return 0;
}
