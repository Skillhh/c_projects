#include<stdio.h>

int main()
{
    char list[50];
    int i = 0;
    int  Pmitad = 0;
    int letter = 0;

    printf("Escriba un palabra: ");
    scanf("%s", list);

    while( list[i] != '\0' )
    {
        i++;
    }
    Pmitad = i / 2;

    i = 0;

    while ( list[i] != Pmitad )
    {
        if( list[i] == 't' || list[i] == 'T' )
            letter = 1;

     i++;
    }
    Pmitad++;
    while ( list[Pmitad] != '\0' )
    {
        if( list[Pmitad] == 't' || list[Pmitad] == 'T' ){
            letter = 2;
        }
      Pmitad++;
    }

    if( letter == 0 ){
        letter = -1;
    }


    printf("%d", letter);

    return 0;
}
