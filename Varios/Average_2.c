#include<stdio.h>

#define MAX 5

int main()
{
    int i, add = 0;
    double d_add;

    add = 20  + 30 + 25 + 12 + 13;

    d_add = (double) add;

    printf("%.2lf\n", d_add / MAX );

}

/*

Output:
10.75

*/

