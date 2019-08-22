/* Ilustra el alcance de variables. */

#include<stdio.h>

int x = 999;

void print_value(void);

main()
{
    extern int x;
    printf("%d", x);
    print_value();
}
void print_value(void)
{
    printf( "%d\n", x );
}


