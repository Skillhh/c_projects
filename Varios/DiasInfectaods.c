#include<stdio.h>
int main()
{
    int dias = 0;
    int infectados = 0;
    int totalInfectados = 0;
    int habitantes ;

    scanf("%d", &habitantes);

    while( infectados < habitantes )
    {
        infectados = infectados + dias;
        ++dias;
    }

    printf("%d", dias);

    return 0;
}
