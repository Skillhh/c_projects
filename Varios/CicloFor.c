#include<stdio.h>

void draw_box( int row, int column );

int main()
{

 draw_box( 8, 35 );

}
void draw_box( int row, int column )
{
    int col;
    for( ; row > 0; row--)
    {
        for( col = column; col > 0; col--)
            printf("X");
        
        printf("\n");
    }

}