#include<stdio.h>

int main()
{
    int add, valor, cantidad;
    int i;
    double d_add, promedio;

    scanf("%d", &cantidad);

    for( i = 0; i < cantidad; i++)
    {
        scanf("%d", &valor);
        add = add + valor;
    }

    d_add = (double) add;

    printf("%.2lf", d_add / cantidad);

}

