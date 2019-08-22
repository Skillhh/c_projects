#include<stdio.h>

int main()
{
    int cosa[12][10];\
    int i, j;
    for( i = 0; i < 12; i++ )
    {
        for( j = 0; j < 10; j++)
        {
            cosa[i][j] = 0;
        }
    }
     for( i = 0; i < 12; i++ )
    {
        for( j = 0; j < 10; j++)
        {
            printf("%d", cosa[i][j] = 0);
        }
        printf("\n");
    }
}