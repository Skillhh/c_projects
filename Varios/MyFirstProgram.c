#include<stdio.h>

int main(void){

    //puts("It's my first program.");


   /* int i, j,k;
    i= 2;
    j= -2;

    if(i)
        i--;
    if(j)
        j++;

    k = i * j;*/

    int var;

    var = 100;
    var = var +100;
    var = var + var;

    //float f;
    //int i;
    //char a = 77;
    //i = 2 * 2 / 2 + 2 * 2 - 1 / 2 % 2;
    //a = 0.1E2;
    //i = 10/ 3;
    //f = i * 3.0;
    //char c;
    /*
    c ='A';
    c += ('Z' - 'A');
    c += ' ';
    c -= ('z' - 'a');

    printf("%c", c );
    */

    int i, j;

    scanf("%d", &i);

    if( i == 0 )
        i = i + 1;

    j = i;
    printf("%d", j / i);

    return 0;
}
