#include<stdio.h>

int main(void)
{
    int Team1 = 0, Team2 = 0, value1, value2, cantidad;
    int i;


    scanf( "%d", &cantidad );

    for( i = 0; i < cantidad; i++ )
    {
       scanf( "%d", &value1 );
       Team1 = Team1 + value1;
       scanf( "%d", &value2 );
       Team2 = Team2 + value2;
    }

    if( Team1 > Team2 )
    {
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", Team1);
        printf("Total weight for team 2: %d\n", Team2 );
    }
    else
    {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 2: %d\n", Team2);
        printf("Total weight for team 1: %d\n", Team1 );
    }

    return 0;
}
