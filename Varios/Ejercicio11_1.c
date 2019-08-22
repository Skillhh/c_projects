#include<stdio.h>
#include<stdlib.h>

struct datos{
    int     a;
    float   b;
    float   c;
    char    d[20];
} info;

//struct datos *p_datos;
struct datos *p_datos;

int main()
{
    p_datos = malloc( sizeof( struct datos ));

    p_datos->a = 22;
    p_datos->b = 4.5;


    //p_datos = info;

    printf("\n%d", p_datos->a);
    printf("\n%.2f", p_datos->b);
    printf("\n%s", p_datos->d);


    return 0;
}
