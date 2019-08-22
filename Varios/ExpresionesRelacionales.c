#include<stdio.h>

int main()
{
    int a;

    a  = ( 5 == 5);  /* Evalua a 1 */

    printf("\na = ( 5 == 5 ) \t a = %d ", a);


    a  = ( 5 != 5); /* Evalua a 0 */

    printf("\na = ( 5 == 5 ) \t a = %d ", a);


    a  = ( 12 == 12 ) + ( 5 != 1 ); /* Evalua a 1 + 1 */ 

    printf("\na = ( 12 == 12 ) + ( 5 != 1 ) \t a = %d ", a);

    return 0;
}