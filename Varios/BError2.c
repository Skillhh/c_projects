#include<stdio.h>

int main()
{
    int x =1;
    static long tally = ;

    for( x = 0; x < 100; x++ )
    {
        if( x % 2 == 0 )
            tally++;
    }
    printf("%d\n", x);
    printf( "%fl\n", tally );

    return 0;
}
