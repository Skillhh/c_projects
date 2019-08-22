#include <stdio.h>

int main()
{
    int n;

start: ;

    puts("Enter a number between 0 to 10: ");
    scanf("%d", &n);

    if( n < 0 || n > 10 )
        goto start;
    else if( n == 0 )
        goto location0;
    else if( n == 1 )
        goto location1;
    else
        goto location2;

location0: ;
    puts("You entered 0.");
    goto end;

location1: ;
    puts("You entered 1.");
    goto end;

location2: ;
    puts( "You entered something between 2 and 10." );
    end: ;

}