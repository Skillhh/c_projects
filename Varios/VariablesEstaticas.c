/* Demuestra las variables locales utomaticas y estaticas */
#include<stdio.h>

void func1(void);

main()
{
    int count;

    for( count = 0; count < 20; count++ )
    {
        printf("At iteration \t %d: \t", count );
        func1();

    }

}
void func1(void)
{
    static int x = 0;
    int y = 0;

    printf("x = %d, y = %d\n", x++, y++);
}
