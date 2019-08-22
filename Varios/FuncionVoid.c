#include<stdio.h>

void demo(void);

int main()
{
 int x = 1, y = 2;

 printf("\nBefore calling demo(), x = %d and y = %d.\n", x, y);
 demo();
 printf("\nAfter calling demo(), x = %d and y = %d.\n", x, y);
}
void demo(void)
{
 int x = 88, y = 99;

 printf("\nWith demo(), x = %d and y = %d. \n", x, y);
}
