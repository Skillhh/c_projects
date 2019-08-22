#include<stdio.h>

int main()
{
    int i;
    char c[1];
    double d;

    printf("%zu\n", sizeof(i));
    printf("%zu\n", sizeof(c));
    printf("%zu", sizeof(d));
    return 0;
}
