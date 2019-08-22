#include<stdio.h>

int main(void)
{
    int i,j;
    int valor;

    scanf("%d", &valor);

    for( i = 0; i < valor; i++ )
    {
        for( j = 0; j < valor; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
