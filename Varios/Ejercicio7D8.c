#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cosa[5][4];\
    int i, j;
    for( i = 0; i < 5; i++ )
    {
        for( j = 0; j < 4; j++)
        {
            cosa[i][j] = rand();
        }
    }
     for( i = 0; i < 5; i++ )
    {
        for( j = 0; j < 4; j++)
        {
            printf("%d  ", cosa[i][j]);
        }
        printf("\n");
    }
}